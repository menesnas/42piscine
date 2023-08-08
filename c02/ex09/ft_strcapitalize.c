/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munas <42kocaeli.com.tr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:34:05 by munas             #+#    #+#             */
/*   Updated: 2023/07/25 11:29:01 by munas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	ft_strlowcase(str);
	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (c == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			c = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			c = 0;
		else if (!(str[i] >= 'a' && str[i] <= 'z'))
			c = 1;
		i++;
	}
	return (str);
}
