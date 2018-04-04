/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:35:12 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/16 19:19:39 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *strsrc)
{
	char	*strdest;
	int		l_strsrc;
	int		i;

	i = 0;
	l_strsrc = ft_strlen(strsrc);
	if (!(strdest = (char*)malloc(sizeof(*strdest) * (l_strsrc + 1))))
		return (NULL);
	while (i < l_strsrc)
	{
		strdest[i] = strsrc[i];
		i++;
	}
	strdest[i] = '\0';
	return (strdest);
}
