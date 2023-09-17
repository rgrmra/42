/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 07:50:13 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/17 13:52:53 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_number(int *nb, int n)
{
	int	i;

	i = 0;
	while (n > -1)
		nb[i++] = --n;
}

void	ft_print_number(int *nb, int n)
{
	int		i;
	char	l;

	i = --n;
	if (nb[0] > 9 || nb[0] == nb[1])
		return ;
	while (i > -1)
	{
		l = nb[i--] + 48;
		write(1, &l, 1);
	}
	if (nb[n] < 9 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	nb[8];

	if (n < 1 || n > 9)
		return ;
	ft_first_number(nb, n);
	while (nb[n - 1] <= 10 - n)
	{
		i = 0;
		ft_print_number(nb, n);
		nb[i] += 1;
		if (nb[i] > 9 && n > 1)
		{
			nb[i + 1] += 1;
			nb[i] = nb[i + 1] + 1;
			while (nb[i + 1] >= 10 - i)
			{
				nb[i + 2] += 1;
				nb[i + 1] = nb[i + 2] + 1;
				nb[i] = nb[i + 1];
				i++;
			}
		}
	}
}
