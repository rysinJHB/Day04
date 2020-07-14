#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int count;

	if (power < 0)
		return (0);
	count = 1;
	i = 0;
	while (i < power)
	{
		count = count * nb;
		i++;
	}
	return (count);
}


int main()
{
  printf("%d",ft_iterative_power(2, 1));
  return(0);
}
