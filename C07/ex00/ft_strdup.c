/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffebbrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:59:54 by ffebbrar          #+#    #+#             */
/*   Updated: 2023/10/04 14:16:03 by ffebbrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*s2;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	s2 = malloc(i + 1);
	if (!(s2))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		s2[i] = src[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
