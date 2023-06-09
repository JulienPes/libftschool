/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:29:57 by jpes              #+#    #+#             */
/*   Updated: 2023/03/29 17:37:02 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
	{
	if (((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
