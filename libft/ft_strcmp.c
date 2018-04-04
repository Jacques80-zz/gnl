/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:00:33 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/22 17:50:18 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int a;

	a = 0;
	while ((unsigned char)s1[a] == (unsigned char)s2[a] &&
			(unsigned char)s1[a] != '\0')
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
