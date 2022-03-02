/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:00:01 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/02 22:22:57 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c < '{')
	{
		ft_putchar(c);
		c = c + 1;
	}
	return ;
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
	return ;
}
