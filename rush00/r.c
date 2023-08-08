#include <unistd.h>

void	putchar(char c)
{
	write(1,&c,1);
}

void	print(int x, char begin, char middle, char end)
{
	int counter = 1;
	while(counter <= x)
	{
		if(counter == 1)
			putchar(begin);
		else if(counter == x)
			putchar(end);
		else
			putchar(middle);
		counter++;
	}
	putchar('\n');
}

void	rush(x,y)
{
	int line = 1;
	if(x >= 1 && y >= 1)
	{
		while(line <= y)
		{
			if(line == 1)
				print(x,'A','B','A');
			else if(line == y)
				print(x,'C','B','C');
			else
				print(x,'B',' ','B');
			line++;
		}
	}
	else
		write(2,"ERROR!",6);
}

int	main(void)
{
	rush(5,6);
	return 0;
}
