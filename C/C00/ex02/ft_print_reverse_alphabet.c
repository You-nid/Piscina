/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:53:41 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/16 16:03:49 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void				ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		--i;
	}
}
