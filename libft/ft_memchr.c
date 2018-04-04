/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:18:37 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/22 15:09:36 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	void			*t;

	i = 0;
	t = (void*)s;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == ((unsigned char)c))
			return (t + i);
		i++;
	}
	return (NULL);
}
