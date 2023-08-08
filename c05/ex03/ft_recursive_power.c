/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munas <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 08:40:02 by munas             #+#    #+#             */
/*   Updated: 2023/07/31 18:15:28 by munas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
