/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:29:25 by krochefo          #+#    #+#             */
/*   Updated: 2022/02/09 12:30:14 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
    
}

// algo:
// **range is an array with min and max so range[0] = min and (range[i] = '\0' - 1) = max
// min inclu et max exclu
//if min > max, !!range points to NULL!!, return 0.
// if error return -1
// return range size.