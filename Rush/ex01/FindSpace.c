/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindSpace.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:05:01 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/02/20 06:55:49 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	find_space_fill(int grid[n][n], int &row, int &col)
{
	while (row < n)
	{
		while (col < n)
		{
			if (grid[row][col] == '0')
			{
				grid[row][col] = n;
			}
			col++;
		}
		row++;
	}
}

void	used_in_row(int grid[n][n], int row,, int num)
{
	while (col < n)
	{
		if (grid[row][col] == num)
			grid[row][col] = num - 1;
		col++;
	}
}

void	used_in_col(int grid[n][n], int col, int num)
{
	while (row < n)
	{
		if (grid[row][col] == num)
			grid[row][col] = num - 1;
		row++;
	}
}
