/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:55:42 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/23 08:24:24 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long nbr, char *base, int *letters, char c)
{
	unsigned long	x;
	unsigned long	size;

	if (c++ == 'p')
		*letters += write(1, "0x", 2);
	size = ft_strlen(base);
	x = nbr;
	if (x >= size)
		ft_putnbr_base(x / size, base, letters, c);
	ft_putchar_fd(base[x % size], 1, letters);
}
