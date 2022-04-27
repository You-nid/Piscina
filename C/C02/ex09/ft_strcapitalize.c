/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:14:25 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 03:52:55 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (i == 0 && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] -= 32;
			i++;
		}
		else if (i > 0 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] += 32;
		else if ((str[count] < '0') || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a')
			|| (str[count] > 'z'))
			i = 0;
		else
			++i;
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*i;
	char	c[] = "; cinquante+et+un";

	i = c;
	printf("%s", ft_strcapitalize(i));
}*/
