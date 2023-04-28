/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:44:10 by jpes              #+#    #+#             */
/*   Updated: 2023/04/28 11:35:10 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_tabs(char *str, char c)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	while (str[i] == c)
	{
		if (str[i + 1] == '\0')
			return (0);
		i++;
	}
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static char	*ft_build_word(char const *str, char c)
{
	size_t	i;
	size_t	j;
	char	*word;

	i = 0;
	j = 0;
	while (str[i] != c && str[i])
		i++;
	word = ft_calloc((i + 1), sizeof(char));
	if (!word)
		return (0);
	while (str[j] != c && str[j])
	{
		word[j] = str[j];
		j++;
	}
	return (word);
}

char	**ft_split(char const *str, char c)
{
	size_t	count_word;
	char	**tab;
	size_t	i;

	count_word = ft_count_tabs((char *)str, c);
	tab = ft_calloc(count_word + 1, sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	while (*str)
	{
		if (*str != c && *str)
		{
			tab[i] = ft_build_word(str, c);
			if (!tab[i])
				return (0);
			i++;
			while (*str != c && *str)
				str++;
		}
		while (*str == c && *str)
			str++;
	}
	return (tab);
}
