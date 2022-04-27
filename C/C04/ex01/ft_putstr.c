/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 04:38:25 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/03 23:48:34 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	write(1, str, i);
}
/*
int	main(void)
{
	char	*s = "sadfbsdgsafsdgsagf";

	ft_putstr(s);
}*/
