/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:33:49 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/29 02:13:05 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*snew;

	i = 0;
	if (s && f)
	{
		if (!(snew = (char*)malloc(ft_strlen(s) + 1 * sizeof(char))))
			return (NULL);
		while (s[i] != '\0')
		{
			snew[i] = f(i, s[i]);
			i++;
		}
		snew[i] = '\0';
		return (snew);
	}
	return (NULL);
}
