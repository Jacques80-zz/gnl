/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:27:37 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/29 02:12:36 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*snew;

	i = 0;
	if (s && f)
	{
		if (!(snew = (char*)malloc(ft_strlen(s) * sizeof(char) + 1)))
			return (NULL);
		while (s[i] != '\0')
		{
			snew[i] = f(s[i]);
			i++;
		}
		snew[i] = '\0';
		return (snew);
	}
	return (NULL);
}
