/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:31:25 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/23 18:08:36 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *src, ...)
{
	va_list	lst;
	int		i;
	int		j;
	char *sign;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '%')
		{
			if (src[i + 1] == 'c' || src[i + 1] == 's' || src[i + 1] == 's'
				|| src[i + 1] == 'p' || src[i + 1] == 'd' || src[i + 1] == 'i'
				|| src[i + 1] == 'u' || src[i + 1] == 'x' || src[i + 1] == 'X')
				i++;
		}
		va_start(lst, i);
		while (i != j)
		{

			i++;
		}

	}
	return (i);
}

int main(void)
{
	char *r = "1";
	printf("%s %s %s %s %s %s %s %s %s %s %s %s ", r,r,r,r,r,r,r,r,r,r,r,r);
}
