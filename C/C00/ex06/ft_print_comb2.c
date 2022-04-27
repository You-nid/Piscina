/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:51:27 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/18 21:49:33 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_print_comb2(void);

void	counter(char a_1, char a_2, char a_3, char a_4)
{
	if (a_1 == '9' && a_2 == '8')
	{	
		write(1, &a_1, 1);
		write(1, &a_2, 1);
		write(1, " ", 1);
		write(1, &a_3, 1);
		write(1, &a_4, 1);
	}
	else
	{
		write(1, &a_1, 1);
		write(1, &a_2, 1);
		write(1, " ", 1);
		write(1, &a_3, 1);
		write(1, &a_4, 1);
		write(1, ", ", 2);
	}
}

char	conditions(d_1, d_2, d_3, d_4)
{
	if (d_3 == d_1)
	{
		d_4 = d_2 +1;
	}
	else
	{
		d_4 = '0';
	}
	return (d_4);
}

void	loop(char b_1, char b_2, char b_3, char b_4)
{
	b_1 = '0';
	while (b_1 <= '9')
	{
		b_2 = '0';
		while (b_2 <= '8')
		{
			b_3 = b_1;
			while (b_3 <= '9')
			{
				b_4 = conditions(b_1, b_2, b_3, b_4);
				while (b_4 <= '9')
				{
					counter(b_1, b_2, b_3, b_4);
					++b_4;
				}
				++b_3;
			}
			++b_2;
		}
		++b_1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	loop(a, b, c, d);
}	
