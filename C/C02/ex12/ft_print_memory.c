/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:40:40 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/24 21:12:04 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print_hex(char *c, unsigned int size)
{
	char	*i;
	int		x;
	unsigned int	counter;

	counter = 0;
	i = "0123456789abcdef";

	while (c[counter] != '\0' && counter < size)
	{
		x = c[counter] / 16;
		write(1, &i[x], 1);
		x = c[counter] % 16;
		write(1, &i[x], 1);
		if (counter % 2 == 1)
			write(1, " ", 1);
		++counter;
	}
}
/*
void	print_address(char *c, unsigned int pos)
{
	unsigned int	count;

	count = pos;
	while (count < 16)
	{
		print_address(&c[count]/16, pos + 1);
		write(1, &c[count % 16], 1);
	}
}*/
/*
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (addr[count] <= 47 || addr[count] >= 123)
		write(1, ".", 1);

	print_address(addr);
	print_hex(addr);
	print_name(addr);
}*/

int	main(void)
{
	char	c[] = "Bonjour les amin";
	//print_address(c, 0);
	print_hex(c, 16);
}
