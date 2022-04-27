/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 00:40:04 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/01 23:07:29 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int		count;
	unsigned int		count_2;

	count = 0;
	count_2 = 0;
	if (!to_find)
		return (str);
	while (str[count_2] != '\0')
	{
		while (str[count + count_2] != '\0'
			&& str[count_2 + count] == to_find[count])
				++count;
		if (to_find[count] == '\0')
			return (str + count_2);
		++count_2;
		count = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	c[] = "toy tor tam";
	char	c2[] = "t";
	
	printf("%s\n",ft_strstr(c, c2));
}*/
