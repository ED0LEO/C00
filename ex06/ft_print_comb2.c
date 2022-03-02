/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:26:39 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/02 22:24:03 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_by_current_position(char fst, char snd, int iter_check);
void	print_four(char fst, char snd, char trd, char fth);
void	ft_putchar(char c);
void	two_while_print(char one, char two);

void	ft_print_comb2(void)
{
	char	fst;
	char	snd;

	fst = '0';
	while (fst <= '9')
	{
		snd = '0';
		while (snd <= '9')
		{
			two_while_print(fst, snd);
			snd++;
		}
		fst++;
	}
	return ;
}

void	two_while_print(char one, char two)
{
	char	three;
	char	four;

	three = one;
	while (three <= '9')
	{
		four = two + 1;
		while (four <= '9')
		{
			print_four(one, two, three, four);
			four++;
		}
		three++;
	}
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	print_four(char fst, char snd, char trd, char fth)
{
	if ((fst == '9'
			&& snd == '8'
			&& trd == '9'
			&& fth == '9'))
	{
		write_by_current_position(fst, snd, 0);
		write_by_current_position(trd, fth, 2);
	}
	else
	{
		write_by_current_position(fst, snd, 0);
		write_by_current_position(trd, fth, 1);
	}
	return ;
}

void	write_by_current_position(char fst, char snd, int iter_check)
{
	ft_putchar(fst);
	ft_putchar(snd);
	if (iter_check == 1)
	{
		write(1, ", ", 2);
	}
	else if (iter_check == 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		write(1, " ", 1);
	}
	return ;
}
