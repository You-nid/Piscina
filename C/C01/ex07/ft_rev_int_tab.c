/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:28:02 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/21 19:49:47 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - i - 1)
	{
		j = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = j;
		++i;
	}
}
/*
int	main(void)
{
	int h[5];
	int	i;

	i = 0;
	while (i < 5)
	{
		h[i] = i;
		printf("%d", h[i]);
		++i;
	}

	ft_rev_int_tab(h, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", h[i]);
		++i;
	}
}*/
