/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:38:21 by rysin             #+#    #+#             */
/*   Updated: 2020/07/15 13:38:24 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	 ft_recursive_power(int nb, int power)
{
		if (power < 0)
			return	(0);

		if (power > 0)
			return (nb * ft_recursive_power(nb, power - 1));
		else 
			return (1);	

}
