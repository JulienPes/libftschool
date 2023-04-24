/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:05:35 by jpes              #+#    #+#             */
/*   Updated: 2023/04/18 11:03:31 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = count * size;
	ptr = malloc(total);
	if (size == 0 && count == 0)
	{
		return (malloc(0));
	}
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total);
	return (ptr);
}
