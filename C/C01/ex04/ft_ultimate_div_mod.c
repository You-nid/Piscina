/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:22:45 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/22 14:08:00 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;

	d = *a / *b;
	*b = *a % *b;
	*a = d;
}

/*int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 1;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}*/
