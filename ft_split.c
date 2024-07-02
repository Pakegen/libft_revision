/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 01:22:24 by qacjl             #+#    #+#             */
/*   Updated: 2024/07/02 02:35:22 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	**ft_free(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}


static char	*ft_put_word(char *dest, char const *src, size_t pointeur_source, size_t wlen)
{
	size_t	i;

	i = 0;
	while (wlen > i)
	{
		dest[i] = src[i + pointeur_source];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_malloc_word(char **str, size_t len_word, char const *src, char c)
{
	size_t	wlen;
	size_t	i;
	size_t	pointeur_array;
	size_t	pointeur_src;

	wlen = 0;
	i = 0;
	pointeur_array = 0;
	while (src[i] && len_word > pointeur_array)
	{
		while (src[i] == c && src[i])
			i++;
		pointeur_src = i;
		while (src[i] != c && src[i++])
			wlen++;
		str[pointeur_array] = (char *)malloc(wlen + 1);
		if (!(str[pointeur_array]))
			return (ft_free(str));
		ft_put_word(str[pointeur_array], src, pointeur_src, wlen);
		pointeur_array++;
		wlen = 0;
	}
	str[pointeur_array] = '\0';
	return (str);
}

static size_t	number_word(char const *str, char c)
{
	size_t	index;
	size_t	word;

	index = 0;
	word = 0;
	while (str[index])
	{
		if (str[index] == c)
			index++;
		else
		{
			word++;
			while (str[index] && str[index] != c)
				index++;
		}
	}
	return (word);
}

char	**ft_split_2(char const *s, char c)
{
	size_t	len_word;
	char	**array;

	len_word = number_word(s, c);
	array = (char **)malloc(sizeof(char *) * (len_word + 1));
	if (!(array))
		return (NULL);
	array[len_word] = NULL;
	if (!(ft_malloc_word(array, len_word, s, c)))
		return (NULL);
	return (array);
}

int	main()
{
	printf("%s", *ft_split_2("   123456   abcdef   ___ ", ' '));
}
