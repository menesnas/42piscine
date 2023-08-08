/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munas <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:52:29 by munas             #+#    #+#             */
/*   Updated: 2023/07/19 15:00:28 by munas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		swap;
	int		swap2;

	i = 0;
	swap2 = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[swap2];
		tab[swap2] = swap;
		i++;
		swap2--;
	}
}
