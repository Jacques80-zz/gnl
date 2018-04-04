/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:04:22 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/25 22:45:27 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	int				a;

	i = 0;
	a = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[a] == (unsigned char)s2[a] &&
			(unsigned char)s1[a] != '\0' && i < (n - 1))
	{
		a++;
		i++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
