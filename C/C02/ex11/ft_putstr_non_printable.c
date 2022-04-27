/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:20:29 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 04:26:53 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_hex(char c)
{
	char	*i;
	int		num;

	i = "0123456789abcdef";
	write(1, "\\", 1);
	num = c / 16;
	write(1, &i[num], 1);
	num = c % 16;
	write(1, &i[num], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 126)
			print_hex(str[count]);
		else
			write(1, &str[count], 1);
		count++;
	}
}
/*
int main(void)
{
	char	c[] = "eq47nqpucx/ds76%&$9oas41i4inmzrn";
	
	ft_putstr_non_printable(c);
}*/
