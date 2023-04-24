/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:23:47 by jpes              #+#    #+#             */
/*   Updated: 2023/04/24 16:48:34 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strtrim(char const *s1, char const *set)
{
   size_t   i;
   size_t   len;
   char  *str;

   str = 0;
   if (s1 != 0 && set != 0)
   {
      i = 0;
      len = ft_strlen(s1);
      while(s1[i] && ft_strchr(set, s1[i]))
         i++;
      while (s1[len - 1] && ft_strchr(set, s1[len -1]) && len > i)
      {
         len --;
      }
      str = (char*)malloc(sizeof(char) * (len - i + 1));
      if (str)
         ft_strlcpy(str, &s1[i], len - i + 1);
   }
   return (str);
}
