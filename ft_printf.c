/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:31:25 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/24 12:43:35 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
}

int	ft_printf(const char *src, ...)
{
	va_list	lst;
	int		i;
	int		count;
	int		arg;
	char *args;

	count = 0;
	arg = 0;
	i = 0;
	va_start(lst, src);
	while (src[i] != '\0')
	{
		if (src[i++] == '%' && src[i + 1] == 'c')
		{
			ft_putchar_fd(va_arg(lst, int), 1, &count);
			i++;
		}
		else if (src[i] == '%' && src[i + 1] == 's')
		{
			ft_putstr_fd(va_arg(lst, char *), 1, &count);
			i++;
		}
		else if (src[i] == '%' && (src[i + 1] == 'd' || src[i + 1] == 'i'))
		{

		}
		else
			ft_putchar_fd(src[i], 1, &count);
		i++;
	}
	va_end(lst);
	return (i);
}

int main(void)
{
	char *c = "test les coupine";
	ft_printf("test%s", c);
	//printf("%s %s %s %s %s %s %s %s %s %s %s %s ", r,r,r,r,r,r,r,r,r,r,r,r);
}
