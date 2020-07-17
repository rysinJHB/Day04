#include <stdio.h>

int	 ft_recursive_power(int nb, int power);

int	 main(void) {
   

    printf("%d", ft_recursive_power(2 , 3));
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
   

