/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:19:45 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 02:39:15 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	char *i;
	char *j;

	i = "asdadas";
	j = "asASD";
	printf("%i\n%i",ft_str_is_lowercase(i),ft_str_is_lowercase(j));
}*/
