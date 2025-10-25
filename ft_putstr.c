/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:24:55 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/25 09:57:33 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c, int fd, int *count)
{
	write (fd, &c, 1);
	(*count)++;
}

void	ft_putstr(char *s, int fd, int *count)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar(s[i], fd, &(*count));
		i++;
	}
}
