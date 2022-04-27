/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:40:04 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/01 22:40:06 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' && s2[count] != '\0')
		&& (count < n && s1[count] == s2[count]))
	{
		++count;
	}
	return (s1[count] - s2[count]);
}
/*
int main(void)
{
	char	c[] = "aaaa";
	char	c2[] = "aaab";
	printf("%i",ft_strncmp(c, c2, 2));
}*/
