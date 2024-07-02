/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:20:50 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/28 12:06:30 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	total;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	i = 0;
	if (dstlen >= size)
		return (size + srclen);
	else
		total = dstlen + srclen;
	while (src[i] && ((dstlen + i + 1) < size))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (total);
}
