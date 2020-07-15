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

#include <stdio.h>

int	 ft_recursive_power(int nb, int power);

int	 main(void) {
   

    printf("%d", ft_recursive_power(5 , 5));
    return 0;
}


 
int ft_recursive_power(int nb, int power)
{


	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
        while (power--)
		{
        
        return (nb *=ft_recursive_power(nb, power--));
		}
        
        
	
	}
	return (0);
}
   

