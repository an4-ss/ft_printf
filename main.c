#include "ft_printf.h"
#include "libc.h"
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd >= 0)
	{
		if (n == -2147483648)
		{
			write (fd, "-2147483648", 11);
			return ;
		}
		if (n < 0)
		{
			n = -n;
			write (fd, "-", 1);
		}
		if (n >= 0 && n <= 9)
		{
			c = n + '0';
			write (fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd (n / 10, fd);
			ft_putnbr_fd (n % 10, fd);
		}
	}
}

int main()
{
	int fd = open("file.txt",O_RDWR);
	close (1);
	int i = ft_printf("");
	int j = printf("");
	ft_putnbr_fd(i,fd);
	write (fd, "\n",1);
	ft_putnbr_fd(j,fd);
}