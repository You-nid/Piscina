/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:48:59 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/24 21:06:12 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_binary(int x)
{
	char	*c;

	c = "01";
	if (x > 1)
	{
		ft_binary(x/2);
		write(1, &c[x % 2], 1);
	}
	else
		write(1, &c[x], 1);

}

int	main()
{
	ft_binary(234);
}
