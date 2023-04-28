/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:30:03 by jpes              #+#    #+#             */
/*   Updated: 2023/04/28 12:47:20 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	if (s != NULL && f != NULL)
	{
		n = ft_strlen(s);
		while (i < n)
		{
			(*f)(i, s);
			i ++;
			s ++;
		}
	}
}
