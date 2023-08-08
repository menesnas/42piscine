/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munas <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:54:59 by munas             #+#    #+#             */
/*   Updated: 2023/07/17 11:07:35 by munas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int lenght, char beginchar, char middlechar, char endchar)
{
	int	letter_count;

	letter_count = 1;
	while (letter_count <= lenght)
	{
		if (letter_count == 1)
			ft_putchar(beginchar);
		else if (letter_count == lenght)
			ft_putchar(endchar);
		else
			ft_putchar(middlechar);
		letter_count++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	linecounter;

	linecounter = 1;
	if (x < 1 || y < 1)
		return ;
	while (linecounter <= y)
	{
		if (linecounter == 1)
			ft_print(x, 'A', 'B', 'A');
		else if (linecounter == y)
			ft_print(x, 'C', 'B', 'C');
		else
			ft_print(x, 'B', ' ', 'B');
		linecounter++;
	}
}

int	main(void)
{
	rush(5, 15);
	return (0);
}
