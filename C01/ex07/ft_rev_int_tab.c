/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:53:42 by krochefo          #+#    #+#             */
/*   Updated: 2022/01/28 11:12:42 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		index;
	char	temp;

	count = 0;
	index = size - 1;
	while (count < index / 2)
	{
		temp = tab[index];
		tab[index] = tab[count];
		tab[count] = temp;
		count++;
		index--;
	}
}
