/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:11:03 by jpes              #+#    #+#             */
/*   Updated: 2023/04/24 11:19:59 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	char			*result;
	size_t			i;

	slen = ft_strlen(s);
	i = 0;
	if (start > slen)
		return (ft_strdup(""));
	if (start < 0 || start >= slen)
		return (ft_strdup(""));
	if (len < 0 || start + len > slen)
		len = slen - start;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		result[i] = s[start + i];
		i ++;
	}
	result[i] = '\0';
	return (result);
}
