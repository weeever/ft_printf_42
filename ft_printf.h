/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:13:23 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/27 13:08:38 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

int		ft_printf(const char *src, ...) __attribute__((format(printf, 1, 2)));
void	ft_putnbr(int n, int fd, int *count);
void	ft_putchar(char c, int fd, int *count);
void	ft_putstr(char *s, int fd, int *count);
void	ft_putnbr_unsigned(unsigned int n, int fd, int *count);
void	ft_putnbr_hexa(unsigned long int n, int fd, int *count);
#endif
