/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:31:25 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/25 10:47:13 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(const char *src, va_list lst, int count, int i, void *str)
{
	while (src[i] != '\0')
	{
		if (src[i] == '%' && src[i + 1] == 'c' )
			(ft_putchar(va_arg(lst, int), 1, &count), i ++);
		else if (src[i] == '%' && src[i + 1] == 's')
			(ft_putstr(va_arg(lst, char *), 1, &count), i ++);
		else if (src[i] == '%' && (src[i + 1] == 'd' || src[i + 1] == 'i'))
			(ft_putnbr(va_arg(lst, int), 1, &count), i ++);
		else if (src[i] == '%' && src[i + 1] == 'u')
			(ft_putnbr_unsigned(va_arg(lst, unsigned int), 1, &count), i ++);
		else if (src[i] == '%' && src[i + 1] == 'p')
		{
			str = va_arg(lst, void *);
			(ft_convert_hexa(&str, &count), i ++);
		}
		else if (src[i] == '%')
			i++;
		else
			ft_putchar(src[i], 1, &count);
		i++;
	}
	return (count);
}

int	ft_printf(const char *src, ...)
{
	va_list	lst;
	void	*str;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(lst, src);
	count = ft_check(src, lst, count, i, str);
	va_end(lst);
	return (count);
}

int	main(void)
{
	static char			*c = "test";
	static void			*a = "test";

	ft_printf("%p", a);
	printf("\n%p", a);
}
