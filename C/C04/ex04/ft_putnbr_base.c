/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:33:57 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/03 23:46:28 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	ft_ver_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base [i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	c;

	c = 0;
	if (ft_ver_base(base) == 1)
	{
		while (base[c] != '\0')
			c++;
		ft_putnbr_base_rec(nbr, base, c);
	}
}
/*
int	main(void)
{
	char base[] = "0123456789ABCDEF";
	ft_putnbr_base(15, base);
}*/
