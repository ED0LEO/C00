/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:22:36 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/02 22:34:16 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c > '`')
	{
		ft_putchar(c--);
	}
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}
