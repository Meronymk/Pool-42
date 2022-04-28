/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:19:24 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/09 12:28:36 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	tab = NULL;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * (max - min));
	i = min;
	j = 0;
	while (i >= min && i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
