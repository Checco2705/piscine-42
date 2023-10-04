/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffebbrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:16:28 by ffebbrar          #+#    #+#             */
/*   Updated: 2023/10/04 15:11:00 by ffebbrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*k;
	int	i;

	if (min >= max)
		return (0);
	k = malloc(max - min);
	if (!(k))
		return (0);
	i = 0;
	while (min < max)
	{
		k[i] = min;
		min++;
		i++;
	}
	return (k);
}
