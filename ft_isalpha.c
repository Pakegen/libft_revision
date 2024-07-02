/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:40:48 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/25 16:10:53 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main()
{
	char str = 'e';
	if (ft_isalpha(str) == 1)
		ft_putstr("on as retrouver ca retourne 1");
	else
		ft_putstr("on as pas retrouver on retourne 0");
}
*/
