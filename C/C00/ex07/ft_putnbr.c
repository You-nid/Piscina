/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:12:39 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/18 21:51:44 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		nb = 2147483647;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		nb = nb % 10 + 48;
		write(1, &nb, 1);
	}
}
