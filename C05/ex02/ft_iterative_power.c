/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:17:11 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/07 14:17:39 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_power(int nb, int power)
{
	int	nbr;

	nbr = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		nbr *= nb;
		power--;
	}
	return (nbr);
}
