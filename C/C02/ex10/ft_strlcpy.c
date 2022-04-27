/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:43:48 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 04:05:28 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len;

	len = 0;
	count = 0;
	while (src[len] != '\0')
		len++;
	if (size != 0)
	{
		while (src[count] != '\0' && count < (size - 1))
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char	*i;
	char	j[] = "";
	char	c[] = "amwwz72qi84qrgayq6po4q4p";

	i = c;
	printf("%u", ft_strlcpy(j, i, 5));
}*/
