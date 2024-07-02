/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:32:21 by qacjl             #+#    #+#             */
/*   Updated: 2024/07/01 12:51:59 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen((char *)s);
	if (!(s))
		return (NULL);
	if (len == 0 || start > slen)
		str = (char *)malloc(1);
	else if (len > (slen - start))
		str = (char *)malloc(slen - start + 1);
	else
		str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len && start < slen)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*

int	main()
{
	printf("%s\n", ft_substr("", 5, 40));
}
*/
