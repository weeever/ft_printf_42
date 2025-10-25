/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:52:39 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/25 11:35:46 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_convert_hexa(void *srcvoid, int *count)
{
	int i;
	int src;

	i = 0;
	srcvoid = src;
	while (src != 0)
	{
		write(1, &"0123456789abcdef"[src / 16], 1);
		src = src % 16;
		count ++;
		i ++;
	}
}
