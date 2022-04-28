/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:50:29 by krochefo          #+#    #+#             */
/*   Updated: 2022/01/26 15:58:41 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_turn_int_char(int x, int y)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0' + (x / 10);
	b = '0' + (x % 10);
	c = '0' + (y / 10);
	d = '0' + (y % 10);
	ft_write(a, b, c, d);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x <= 98)
	{
		y = (x + 1);
		while (y <= 99)
		{
			ft_turn_int_char(x, y);
			y++;
		}
	x++;
	}
}
