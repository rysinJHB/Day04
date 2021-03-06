/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:17:53 by rysin             #+#    #+#             */
/*   Updated: 2020/07/15 14:25:53 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	
	if (nb > 1)
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0 || nb < 0)
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
	return (0);
}

int main(void) {
	printf("%d\n", ft_is_prime(7));
	return 0;
}

