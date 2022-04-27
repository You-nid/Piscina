/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:43:41 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/13 19:21:20 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void				ft_putchar(char x);

void	horizontal_line(int x, int y)
{
	int c;

	c = 0;
	ft_putchar('A');
	while (c < x-1 && x != 0)
	{
		ft_putchar('B');
		c++;
	}
	if (c == x-1 && x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	body_lines(int x, int y)
{
	int	c;
	int f;

	f = 0;
	while (f < y-1)
	{
		c = 0;
		if (c == 0 && f >= 0)
		{
			ft_putchar('B');
		}
		while (c < x-1)
		{
			ft_putchar(' ');
			c++;
		}
		if (c != 0 && c == x-1 && f < y-1)
		{
			ft_putchar('B');
		}
	 	ft_putchar('\n');
		f++;
	}
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1,"Negative Number",15);
	}
	else
	{	
		horizontal_line(x, 0);
		if(y > 1)
		{
			body_lines(x, y);
		}
		horizontal_line(x, y);
	}
}
