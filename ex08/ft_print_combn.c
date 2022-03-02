/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:33:40 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/02 22:08:04 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_next_numb(int max, int pos, char arr[]);
void	print_array(char *arr, int max);
void	print_comma(char c, int max, char *arr);

void	ft_print_combn(int n)
{
	char	numb[9];

	print_next_numb(n, 1, numb);
	ft_putchar('\n');
	return ;
}

void	print_next_numb(int max, int pos, char arr[])
{
	char	iter;

	iter = '0';
	while (iter <= '9')
	{
		arr[pos] = iter;
		if (pos == max)
		{
			print_array(arr, max);
		}
		if (pos < max)
		{
			print_next_numb(max, pos + 1, arr);
		}
		iter++;
	}
	return ;
}

void	print_array(char *arr, int max)
{
	int	m;
	int	y;
	int	norm;

	m = 1;
	y = max;
	norm = 1;
	while (y > 1)
	{
		if (max != 1 && arr[y] <= arr[y - 1])
		{
			norm = 0;
		}
		y--;
	}
	if (norm == 1)
	{
		print_comma(arr[max], max, arr);
	}
	return ;
}

void	print_comma(char c, int max, char *arr)
{
	int	m;

	m = 1;
	if (c == '1')
	{
		while (m <= max)
		{	
			write(1, &arr[m], 1);
			m++;
		}
	}
	else
	{
		write(1, ", ", 2);
		while (m <= max)
		{	
			write(1, &arr[m], 1);
			m++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}
