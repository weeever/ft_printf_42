/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:31:25 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/23 17:49:56 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *src, ...)
{
	va_list lst;
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '%' && src[i + 1] == 'c')
		{
			
		}
	}
}

int main(void)
{
	char *r = "1";
	printf("%s %s %s %s %s %s %s %s %s %s %s %s ", r,r,r,r,r,r,r,r,r,r,r,r);
}
