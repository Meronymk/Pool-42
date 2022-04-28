/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:48:27 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/01 09:48:48 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[res] != 0 && res < (size -1))
		{
			dest[res] = src[res];
			res++;
		}
		dest[res] = '\0';
	}
	return (i);
}
