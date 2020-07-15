/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:34:47 by rysin             #+#    #+#             */
/*   Updated: 2020/07/15 13:34:51 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int z;
	int i;

	if (nb <= 0)
		return(0);
	if (nb > 12)
		return(0);
	i = 1;
	z = 1;
	while (i <= nb)
	{
		z = z * i;
		i++;
	}
	return (z);
}

int	main(void)
{
	int nbr;

	nbr = ft_iterative_factorial(11);
	printf("factr = %i\n", nbr);
	return(0);
}
