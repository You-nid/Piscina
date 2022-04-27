/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:41:43 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 02:41:57 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{	
	int	i;

	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	printf("%i\n%i",ft_str_is_uppercase(i),ft_str_is_uppercase(j));
}*/
