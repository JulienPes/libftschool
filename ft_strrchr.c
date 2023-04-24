/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:16:44 by jpes              #+#    #+#             */
/*   Updated: 2023/04/11 18:20:13 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char) c)
		{
			return (&str[i]);
		}
		i--;
	}
	if (str[i] == (char) c)
	{
		return (&str[i]);
	}
	return (NULL);
}
