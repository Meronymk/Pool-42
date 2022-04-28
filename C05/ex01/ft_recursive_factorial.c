/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:16:11 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/07 14:16:40 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	nbr;

	nbr = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		nbr *= nb * ft_recursive_factorial(nb - 1);
	return (nbr);
}
