/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:42:48 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/28 13:23:42 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *litlle, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)big;
	if (litlle == NULL)
		return (str);
	while (str)
	{
		while (litlle[i] && i < len)
		{
			if (litlle[i] == str[0])
				return (str);
			i++;
		}
		i = 0;
		str++;
	}
	return (NULL);

}
/*
#include<string.h>

int	main()
{
	printf("%s", ft_strnstr("459kdksm", "77k7a89", 6));
}
*/
