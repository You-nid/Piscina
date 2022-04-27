/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:03:33 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/28 02:31:26 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char	*i = malloc(sizeof(char)* 10);
	char	*j;

	*i = 'H';
	i[1] = 'e';
	j = "Helloh";
	i = ft_strcpy(i, j);
	printf("%s %s", i, j);
}*/
