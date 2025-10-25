/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:10:46 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/25 09:57:27 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n, int fd, int *count)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		(*count) += 11;
		return ;
	}
	else if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		(*count) += 10;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', fd, &(*count));
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), fd, &(*count));
		ft_putchar((n % 10) + '0', fd, &(*count));
	}
	else
		ft_putchar((n + '0'), fd, &(*count));
}

void	ft_putnbr_unsigned(unsigned int n, int fd, int *count)
{
	if (n < 0)
	{
		ft_putchar('-', fd, &(*count));
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), fd, &(*count));
		ft_putchar((n % 10) + '0', fd, &(*count));
	}
	else
		ft_putchar((n + '0'), fd, &(*count));
}
