/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:46:43 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/02 12:20:24 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_by_current_position(int fst, int snd, int trd);
void	check_duplicates_and_write(int fst, int snd, int trd);

void	ft_print_comb(void)
{
	int	iter_first;
	int	iter_second;
	int	iter_third;

	iter_first = 0;
	while (iter_first < 10)
	{
		iter_second = 0;
		while (iter_second < 10)
		{
			iter_third = 0;
			while (iter_third < 10)
			{
				check_duplicates_and_write(iter_first, iter_second, iter_third);
				iter_third++;
			}
			iter_second++;
		}
		iter_first++;
	}
	return ;
}

void	check_duplicates_and_write(int fst, int snd, int trd)
{
	if (fst != snd
		&& snd != trd
		&& fst != trd
		&& trd > snd
		&& snd > fst)
	{
		write_by_current_position(fst, snd, trd);
	}
	return ;
}

void	write_by_current_position(int fst, int snd, int trd)
{
	int	var_prep_for_out;

	var_prep_for_out = 0;
	var_prep_for_out = 48 + fst;
	write(1, &var_prep_for_out, 1);
	var_prep_for_out = 48 + snd;
	write(1, &var_prep_for_out, 1);
	var_prep_for_out = 48 + trd;
	write(1, &var_prep_for_out, 1);
	if (!(fst == 7
			&& snd == 8
			&& trd == 9))
	{
		write(1, ", ", 2);
	}
	else
	{
		write(1, "\n", 1);
	}
	return ;
}
