/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:19:39 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/03 22:31:07 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	count = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
			++count;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = (result * 10) + (str[count] - '0');
		count++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	printf("%i",ft_atoi(" ---+--+1234ab567"));
}*/
