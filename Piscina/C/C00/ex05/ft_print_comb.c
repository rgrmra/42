/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 07:11:30 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/16 08:28:56 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int ones, int tens, int hundreds)
{
	ft_putchar(hundreds + 48);
	ft_putchar(tens + 48);
	ft_putchar(ones + 48);
	if (hundreds != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	ones;
	int	tens;
	int	hundreds;

	ones = 2;
	tens = 1;
	hundreds = 0;
	while (hundreds < 8)
	{
		if (hundreds < tens && tens < ones)
			ft_print_number(ones, tens, hundreds);
		if (++ones > 9)
			ones = tens++;
		if (tens > 9)
			tens = hundreds++;
	}
}
