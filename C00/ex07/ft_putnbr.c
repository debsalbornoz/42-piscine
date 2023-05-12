#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	c = nb % 10 + '0';
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		c = nb % 10 + '0';
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	write(1, &c , 1);
}

int main()
{
int number = -1234;
write(1, "Number: ", 8);
ft_putnbr(number);
write(1, "\n", 1); // Quebra de linha após o número ser impresso
return 0;
}
