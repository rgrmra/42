/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:48:11 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/29 20:23:36 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_base(char *base, int *bs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(base + i) != '\0')
	{
		j++;
		if ((*(base + i) == *(base + j)) || (*(base + i) == ' ')
			|| (*(base + i) == '+') || (*(base + i) == '-')
			|| (*(base + i) >= 9 && *(base + i) <= 13))
		{
			*bs = 0;
			return ;
		}
		if (*(base + j) == '\0')
			j = ++i;
	}
	*bs = i;
}

void	ft_putnbr(int nbr, char *base, int bs)
{
	long	nb;

	nb = (long) nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < bs)
		ft_putchar(*(base + nb));
	if (nb >= bs)
	{
		ft_putnbr(nb / bs, base, bs);
		ft_putnbr(nb % bs, base, bs);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bs;

	bs = 0;
	ft_check_base(base, &bs);
	if (bs > 1)
		ft_putnbr(nbr, base, bs);
}
