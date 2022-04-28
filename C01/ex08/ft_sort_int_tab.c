/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:58:56 by krochefo          #+#    #+#             */
/*   Updated: 2022/01/28 11:14:06 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	count;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			x = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = x;
			count = -1;
		}
		count++;
	}
}
