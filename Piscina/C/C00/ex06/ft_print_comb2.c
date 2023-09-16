/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 08:03:23 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/16 08:29:38 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int limit, int num)
{
	ft_putchar(limit / 10 + 48);
	ft_putchar(limit % 10 + 48);
	ft_putchar(' ');
	ft_putchar(num / 10 + 48);
	ft_putchar(num % 10 + 48);
	if (limit < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num;
	int	limit;

	limit = 0;
	num = 0;
	while (limit < 99)
	{
		ft_print_number(limit, ++num);
		if (num > 98)
			num = ++limit;
	}
}
