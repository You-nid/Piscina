/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 00:05:02 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/01 19:44:08 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	counter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		d_c;
	int		s_c;
	int		i;

	i = 0;
	d_c = counter(dest);
	s_c = counter(src);
	while (i < s_c)
	{
		dest[d_c + i] = src[i];
		++i;
	}
	dest[d_c + s_c] = '\0';
	return (dest);
}
/*
int main(void)
{
	char	c[] = "aaaa";
	char	c2[] = "aaab";
	printf("%s",ft_strcat(c, c2));
}*/
