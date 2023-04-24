/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:39:52 by jpes              #+#    #+#             */
/*   Updated: 2023/04/03 15:41:15 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	value;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	value = (unsigned char)c;
	dest = b;
	while (i < len)
	{
		dest[i] = value;
		i++;
	}
	return (dest);
}
