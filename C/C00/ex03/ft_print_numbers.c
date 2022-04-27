/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:35:16 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/16 16:04:16 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void				ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}
