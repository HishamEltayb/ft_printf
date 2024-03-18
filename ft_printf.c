/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:32:40 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/23 09:21:38 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_specifier(va_list args, char letter, int *counter)
{
	if (letter == 's')
		ft_putstr_fd(va_arg(args, char *), 1, counter);
	else if (letter == 'c')
		ft_putchar_fd(va_arg(args, int), 1, counter);
	else if (letter == 'd' || letter == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, counter);
	else if (letter == 'u')
		ft_putnbr_base(va_arg(args, unsigned int),
			"0123456789", counter, 'u');
	else if (letter == 'x')
		ft_putnbr_base(va_arg(args, unsigned int),
			"0123456789abcdef", counter, 'x');
	else if (letter == 'X')
		ft_putnbr_base(va_arg(args, unsigned int),
			"0123456789ABCDEF", counter, 'X');
	else if (letter == 'p')
		ft_putnbr_base(va_arg(args, unsigned long),
			"0123456789abcdef", counter, 'p');
	else if (letter == '%')
		*counter += write(1, "%", 1);
}

int	ft_printf(const char *string, ...)
{
	int		counter;
	int		i;
	va_list	args;

	if (!string)
		return (0);
	va_start(args, string);
	i = 0;
	counter = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '%' && ++i)
		{
			while (string[i] && !ft_strchr("iudcpxXds%", string[i]))
				i++;
			if (string[i] == '\0')
				break ;
			check_specifier(args, string[i], &counter);
		}
		else
			counter += write(1, &string[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
