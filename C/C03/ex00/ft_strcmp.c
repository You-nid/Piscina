/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 22:10:31 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/03/01 19:43:22 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	count_1;

	count_1 = 0;
	while ((s1[count_1] != '\0' && s2[count_1] != '\0')
		&& s1[count_1] == s2[count_1])
	{
		++count_1;
	}
	return (s1[count_1] - s2[count_1]);
}
/*
int main(void)
{
	char	c[] = "aaaa";
	char	c2[] = "aaaab";
	printf("%i",ft_strcmp(c, c2));
}*/
