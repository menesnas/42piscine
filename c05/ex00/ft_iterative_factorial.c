/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munas <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 02:06:43 by munas             #+#    #+#             */
/*   Updated: 2023/07/31 18:14:51 by munas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	sign;

	i = 1;
	sign = 1;
	if (nb > 0 && nb <= 12)
	{
		while (i <= nb)
		{
			sign = i * sign;
			i++;
		}
		return (sign);
	}
	if (nb == 0)
		return (1);
	return (0);
}
