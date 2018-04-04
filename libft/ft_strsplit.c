/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:48:38 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/29 02:16:59 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_c_w(char const *s, char c)
{
	size_t		words_count;
	size_t		i;

	words_count = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		while (((char *)s)[i] == c)
		{
			if (((char *)s)[i + 1] == '\0')
				return (words_count);
			i++;
		}
		while (((char *)s)[i] != c && ((char *)s)[i] != '\0')
			i++;
		words_count++;
	}
	return (words_count);
}

static char		**ft_fil_tab(char const *s, char c, char **tab)
{
	int		w;
	size_t	i;
	int		j;

	w = 0;
	i = 0;
	if (s[0] == '\0')
	{
		tab[i] = NULL;
		return (tab);
	}
	while (i < ft_c_w(s, c))
	{
		j = 0;
		if (!(tab[i] = malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[w] == c && s[w] != '\0')
			w++;
		while (s[w] != c && s[w] != '\0')
			tab[i][j++] = s[w++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (s != NULL)
	{
		if (!(tab = malloc(sizeof(char *) * (ft_c_w(s, c) + 1))))
			return (NULL);
		return (ft_fil_tab(s, c, tab));
	}
	return (NULL);
}
