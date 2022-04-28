/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:29:20 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/07 14:14:03 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	nbr;

	nbr = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		nbr *= nb--;
	return (nbr);
}
