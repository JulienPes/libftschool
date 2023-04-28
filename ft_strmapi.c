/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:55:42 by jpes              #+#    #+#             */
/*   Updated: 2023/04/28 11:54:49 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	slen;
	unsigned int	i;

	slen = ft_strlen(s);
	dest = malloc(sizeof(char) * (slen + 1));
	i = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	if (s != NULL && f != NULL)
	{
		while (i < slen)
		{
			dest[i] = (*f)(i, s[i]);
			i ++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
