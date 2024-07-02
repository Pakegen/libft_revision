/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:09:53 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/28 12:05:45 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d1;
	char	*s1;

	d1 = (char *)dest;
	s1 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);

	if (src > dest)
		while (0 < n--)
			*d1++ = *s1++;
	else
		while (0 < n)
		{
			d1[n] = s1[n];
			n--;
		}
	return (dest);
}
