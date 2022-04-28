/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:15:29 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/03 12:17:07 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str, int i)
{
	if (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		return (1);
	return (0);
}

int	check_base(char *str, int i)
{
	int		j;
	char	*base;

	base = "0123456789";
	j = 0;
	while (base[j])
	{
		if (base[j] == str[i])
			return (1);
		j++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str, i) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (check_base(str, i) == 1)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
