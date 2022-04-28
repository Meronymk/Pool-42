/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:18:01 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/03 12:54:24 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int		j;
	int		a;

	j = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[j])
	{
		a = j + 1;
		while (base[a])
		{
			if (base[a] == base[j])
				return (0);
			a++;
		}
		if (base[j] == '+' || base[j] == '-'
			|| !(base[j] >= ' ' && base[j] <= '~'))
			return (0);
		j++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr2;

	nbr2 = nbr;
	if (check_base(base) == 0)
		return ;
	if (check_base(base) == 1)
	{
		if (nbr2 < 0)
		{
			ft_putchar('-');
			nbr2 = -nbr2;
		}
		if (nbr2 >= ft_strlen(base))
		{
			ft_putnbr_base((nbr2 / ft_strlen(base)), base);
			ft_putnbr_base((nbr2 % ft_strlen(base)), base);
		}
		else
			ft_putchar(base[nbr2]);
	}
}
