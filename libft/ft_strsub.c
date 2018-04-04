/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:40:13 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/29 02:14:16 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	s1 = (char*)malloc(sizeof(char) * (len + 1));
	if (!(char*)malloc(sizeof(char) * (len + 1)))
		return (NULL);
	if (s == NULL)
		return (NULL);
	if (s1)
	{
		while (start--)
			s++;
		ft_strncpy(s1, s, len);
		s1[len] = '\0';
	}
	return (s1);
}
