/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:40:00 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 03:16:22 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		++i;
	}
	return (1);
}
/*
int	main(void)
{
	char	*i;
	char	*j;

	i = "asdadas";
	j = "asASD";
	printf("%i\n%i", ft_str_is_printable(i), ft_str_is_printable(j));
}*/
