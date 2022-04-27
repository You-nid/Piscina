/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 03:29:40 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/01 23:33:34 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int	counter(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	src_len;

	dest_len = counter(dest);
	src_len = counter(src);
	if (size == 0)
		return (dest_len + src_len);
	while ((i < (size - dest_len - 1) && size > dest_len) && (src[i] != '\0'))
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len - size);
}
/*
int	main(void)
{
	char	c[] = "Here we go";
	char	c2[] = "What is left";

	printf("%i\n",ft_strlcat(c, c2, 5));
	printf("%lu\n",strlcat(c, c2, 5));
}*/
