/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:00:57 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/16 16:03:11 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		++i;
	}
}
