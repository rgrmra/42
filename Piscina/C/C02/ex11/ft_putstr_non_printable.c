/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:48:52 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/21 21:54:32 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(int nb)
{
	if (nb < 10)
		ft_putchar(nb + 48);
	else if (nb < 16)
		ft_putchar(nb + 87);
	if (nb >= 16)
	{
		ft_putnbr_hex(nb / 16);
		ft_putnbr_hex(nb % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < ' ' || *(str + i) > '~')
		{
			ft_putchar('\\');
			if (*(str + i) < 16)
				ft_putchar('0');
			ft_putnbr_hex((int) *(str + i));
		}
		else
			ft_putchar(*(str + i));
		i++;
	}
}
