#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
		char 	buffer[12]; //11 digits (incl sign) plus 1 for null
		int		i;

		i = 0;
		if (nb == 0)
		{
				ft_putchar('0');
				return;
		}
		if (nb == -2147483648)
		{
				ft_putchar('-');
				ft_putchar('2');
				nb = 147483648;
		}
		if (nb < 0)
		{
				ft_putchar('-');
				nb *= -1;
		}
		while (nb != 0)
		{
				buffer[i] = nb % 10 + '0';
				nb /= 10;
				i++;
		}
		int		j;
		
		j = i -1;
		while (j >= 0)
		{
				ft_putchar(buffer[j]);
				j--;
		}
}

int		main(void)
{
		ft_putnbr(666);
		ft_putchar('\n');
		ft_putnbr(-2147483647);
		ft_putchar('\n');
		ft_putnbr(123456789);
		ft_putchar('\n');
		return (0);
}
