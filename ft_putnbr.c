/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:10:46 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/24 22:55:53 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_fd(int n, int fd, int *count)
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
		ft_putchar_fd('-', fd, &(*count));
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd, &(*count));
		ft_putchar_fd((n % 10) + '0', fd, &(*count));
	}
	else
		ft_putchar_fd((n + '0'), fd, &(*count));
}
