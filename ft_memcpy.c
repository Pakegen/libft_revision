/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:07:51 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/28 12:04:35 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d1;
	char	*s1;
	size_t	i;

	d1 = (char *)dest;
	s1 = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	while(i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dest);
}
