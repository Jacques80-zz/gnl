/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:56:26 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/29 02:15:47 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_first_spaces(char const *s)
{
	int i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	return (i);
}

static int		ft_last_spaces(char const *s)
{
	int i;
	int j;
	int size;

	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && (j != 0))
		j--;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && (s[i] != '\0'))
		i++;
	size = ((j + 1) - i);
	return (size);
}

char			*ft_strtrim(char const *s)
{
	char	*s2;
	int		j;
	int		size;
	int		beg;

	if (s != NULL)
	{
		size = ft_last_spaces(s);
		beg = ft_first_spaces(s);
		if (size < 0)
			size = 0;
		if (!(s2 = (char *)malloc(sizeof(char) * (size + 1))))
			return (NULL);
		j = 0;
		while (j < size)
		{
			s2[j] = ((char)s[beg + j]);
			j++;
		}
		s2[j] = '\0';
		return (s2);
	}
	return (NULL);
}
