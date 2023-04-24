/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:10:54 by jpes              #+#    #+#             */
/*   Updated: 2023/04/04 16:01:14 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;

	i = 0;
	source = (unsigned char *) src;
	destination = (unsigned char *) dst;
	if (source == NULL && destination == NULL)
	{
		return (NULL);
	}
	if (destination > source)
	{
		while (len-- > 0)
			destination[len] = source[len];
	}
	else
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dst);
}
