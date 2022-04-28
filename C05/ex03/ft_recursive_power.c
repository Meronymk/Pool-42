/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:18:09 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/07 14:18:45 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	nbr;

	nbr = 1;
	if (power < 0)
		return (0);
	if (power > 0)
		nbr *= nb * ft_recursive_power(nb, power - 1);
	return (nbr);
}
