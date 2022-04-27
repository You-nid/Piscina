/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:05:24 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/22 14:30:08 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int allsorted;

	allsorted = 0;
	while (!allsorted)
	{
		allsorted = 1;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				allsorted = 0;
			}
			i++;
		}
	}
}

int	main(void)
{
	int h[6] = {-5, 101, -50, 70, 80, 90};
	int i;

	ft_sort_int_tab(h, 6);
	
	i = 0;
	while (i < 6)
	{
		printf("%d\t", h[i]);
		++i;
	}
	return (0);
}
