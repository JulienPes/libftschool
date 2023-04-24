/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:05:19 by jpes              #+#    #+#             */
/*   Updated: 2023/04/18 11:05:02 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*stringcopy;

	len = ft_strlen(s1) + 1;
	stringcopy = malloc(len);
	if (stringcopy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(stringcopy, s1, len);
	return (stringcopy);
}
