/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:54:59 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/03 14:02:19 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(char *str, int i)
{
	if (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		return (1);
	return (0);
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
		if (ft_isspace(base, j) == 1 || base[j] == '+' || base[j] == '-')
			return (0);
		j++;
	}
	return (1);
}

int	ft_isbase(char c, char *base)
{
	int		j;

	j = 0;
	while (base[j])
	{
		if (base[j] == c)
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	if (check_base(base) == 0)
		return (0);
	while (ft_isspace(str, i) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isbase(str[i], base) >= 0)
	{
		res = res * ft_strlen(base) + ft_isbase(str[i], base);
		i++;
	}
	return (res * sign);
}
