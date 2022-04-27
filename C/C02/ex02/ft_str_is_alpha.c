/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:50:19 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 02:32:51 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char *g = "gfdhhadsgaf";
	char *h = "dasdasfº$$$$$$213516";
	
	printf("%i\n", ft_str_is_alpha(g));
	printf("%i", ft_str_is_alpha(h));
}*/
