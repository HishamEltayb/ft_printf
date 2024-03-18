/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:33:24 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/23 09:18:30 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *string, ...);

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	ft_putnbr_fd(int n, int fd, int *letters);
void	ft_putstr_fd(char *s, int fd, int *letters);
void	ft_putchar_fd(char c, int fd, int *letters);
void	ft_putnbr_base(unsigned long nbr, char *base, int *letters, char c);

#endif