/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:37:20 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/02 16:52:15 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
char	check_nb(int nb);

void	ft_putnbr(int nb)
{
	char	digits[10];
	int		iter;

	iter = 0;
	if (nb == 0)
	{
		digits[0] = '0';
		iter++;
	}
	while (iter <= 10)
	{
		digits[iter] = check_nb(nb);
		iter++;
		nb = nb / 10;
	}
	while (iter >= 0)
	{
		if (digits[iter] != 'E')
		{
			ft_putchar(digits[iter]);
		}
		iter--;
	}
	return ;
}

char	check_nb(int nb)
{
	if (nb > 0)
	{
		return (48 + nb % 10);
	}
	else
	{
		return ('E');
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
	return ;
}
