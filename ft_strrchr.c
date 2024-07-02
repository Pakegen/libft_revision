/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:25:52 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/28 12:07:05 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		k;

	str = (char *)s;
	k = ft_strlen(str);
	i = ft_strlen(str);
	while(i > 0)
	{
		if(str[i] == c)
			return (str + i);
		i--;
	}
	return (str + k);
}
/*
int	main()
{
	printf("%s\n", ft_strrchr("jepjfojepj", 'z'));
	printf("%s", strrchr("jdjdjdjdj", 'A'));

}*/
