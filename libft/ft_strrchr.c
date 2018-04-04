/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:46:08 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/16 12:49:12 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (((char*)s) + i);
		if (s[i] == '\0' && c == '\0')
			return (((char*)s) + i);
		i--;
	}
	return (NULL);
}
