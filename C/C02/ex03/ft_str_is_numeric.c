/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:07:06 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 02:36:59 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char *g = "gfdhhadsgaf";
	char *h = "dasdasfº$$$$$$2138745";

	printf("%i\n", ft_str_is_numeric(g));
	printf("%i", ft_str_is_numeric(h));
}*/
