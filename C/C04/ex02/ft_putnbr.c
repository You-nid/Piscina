/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:55:07 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/03 22:19:02 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			write (1, "-2", 2);
			nb = 147483648;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
		{
			ft_putchar(nb + '0');
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(-54867);
	return (0);
}*/
