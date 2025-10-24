/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weeever <weeever@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:31:25 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/24 23:11:08 by weeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(const char *src, ...)
{
	
}

int	ft_printf(const char *src, ...)
{
	va_list	lst;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(lst, src);
	while (src[i] != '\0')
	{
		if (src[i] == '%' && src[i + 1] == 'c' )
			(ft_putchar_fd(va_arg(lst, int), 1, &count), i ++);
		else if (src[i] == '%' && src[i + 1] == 's')
			(ft_putstr_fd(va_arg(lst, char *), 1, &count), i ++);
		else if (src[i] == '%' && (src[i + 1] == 'd' || src[i + 1] == 'i'))
			(ft_putnbr_fd(va_arg(lst, int), 1, &count), i ++);
		else if (src[i] == '%' && src[i + 1] == 'u')
			(ft_putnbr_unsigned(va_arg(lst, unsigned int), 1, &count), i ++);
		else
			ft_putchar_fd(src[i], 1, &count);
		i++;
	}
	va_end(lst);
	return (count);
}

int	main(void)
{
	static char			c = 'a';
	static unsigned int	a = -21474836;

	a = ft_printf("%c", c);
	printf("\n%i", a);
}
