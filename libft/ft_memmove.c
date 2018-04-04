/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 23:32:36 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/24 22:30:11 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void *s0;

	s0 = s1;
	if (s1 < s2)
		while ((size_t)(s1 - s0) < n)
			(*(t_byte *)s1++) = (*(t_byte *)s2++);
	else
		while (n-- > 0)
			((t_byte *)s1)[n] = ((t_byte *)s2)[n];
	return (s0);
}
