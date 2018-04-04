/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:01:06 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/24 22:06:14 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t	i;
	char	*i1;
	char	*i2;

	if (!*to_find)
		return ((void *)src);
	while (n-- && *src)
	{
		if (*src == *to_find)
		{
			i = n;
			i1 = (void *)src + 1;
			i2 = (void *)to_find + 1;
			while (i-- && *i1 && *i2 && *i1 == *i2)
			{
				++i1;
				++i2;
			}
			if (!*i2)
				return ((void *)src);
		}
		src++;
	}
	return (NULL);
}
