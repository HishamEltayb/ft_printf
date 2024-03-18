/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:16:17 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/22 20:24:57 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	if (s == NULL)
		return (NULL);
	if (*s == c)
		return ((char *)s);
	ptr = (char *)s;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
		if ((ptr[i] == '\0') && (ptr[i] == (char)c))
			return (&ptr[i]);
	}
	return (NULL);
}
