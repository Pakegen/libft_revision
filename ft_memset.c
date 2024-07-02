/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:02:45 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/28 12:04:01 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (s == NULL)
		return (s);
	while (i < n)
		str[i++] = c;
	return (s);
}
