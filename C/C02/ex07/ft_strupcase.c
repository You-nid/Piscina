/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:57:51 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 03:21:35 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 32;
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*i;
	char	c[10] = "asghsasa";

	i = c;
	printf("%s", ft_strupcase(i));
}*/
