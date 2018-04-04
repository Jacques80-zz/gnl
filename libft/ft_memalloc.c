/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:45:12 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/20 21:21:21 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = (void*)malloc(sizeof(void) * size);
	if (!(str = (char*)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(str, (size));
	return (str);
}
