/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 08:18:38 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/01 08:29:08 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	if (nb < 0)
		return (0);
	nbr = 1;
	while (nb > 1)
		nbr *= nb--;
	return (nbr);
}
