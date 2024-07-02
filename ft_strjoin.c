/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:53:02 by qacjl             #+#    #+#             */
/*   Updated: 2024/07/01 13:19:54 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	size_t	lens1;
	size_t	lens2;
	char	*dest;

	i = 0;
	k = 0;
	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	dest = (char *)malloc(lens1 + lens2 + 1);
	if (dest == NULL)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		dest[i + k] = s2[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/*
int main ()
{
	printf("%s", ft_strjoin("", ""));
}*/
