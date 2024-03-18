/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 09:34:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/22 20:54:15 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *letters)
{
	int	i;

	if (s == NULL)
	{
		*letters += write(1, "(null)", 6);
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd, letters);
		i++;
	}
}
