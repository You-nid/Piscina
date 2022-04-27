/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:45:10 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/20 01:53:05 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_print_combn(int n);
void				ft_print_combn_rec(char numbers[], int pos, int n, char c);

int main()
{
	ft_print_combn(4);
	return (0);
}

void	ft_print_combn(int n)
{
	char	numbers[9];

	ft_print_combn_rec(numbers, 0, n, '0');
}

void	ft_print_combn_rec(char numbers[], int pos, int n, char c)
{
	char	copy_n[9];
	int		index;

	if (pos == n)
		return ;
	index = -1;
	while (++index < pos)
		copy_n[index] = numbers[index];
	while (c <= '9')
	{
		copy_n[pos] = c;
		if (pos == n - 1)
		{
			write(1, &copy_n, n);
			if (copy_n[0] != '9' - n + 1)
				write(1, ", ", 2);
		}
		else
			ft_print_combn_rec(copy_n, pos + 1, n, copy_n[pos] + 1);
		c++;
	}
}
