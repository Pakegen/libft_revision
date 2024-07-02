/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:40:02 by qacjl             #+#    #+#             */
/*   Updated: 2024/07/02 02:36:51 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_trim(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && (ft_trim(s1[start], set) == 1))
		start++;
	while (end > start && (ft_trim(s1[end - 1], set) == 1))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!(str))
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	printf("%s", ft_strtrim("bilebibibib j aime les pommes bible", "bible"));
}
*/
