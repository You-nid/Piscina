/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:40:38 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/18 22:00:28 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_ch(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, "789", 3);
	}
	else
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print_ch(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}	
}
