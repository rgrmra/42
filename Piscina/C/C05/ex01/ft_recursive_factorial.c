/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 08:42:44 by rde-mour          #+#    #+#             */
/*   Updated: 2023/10/01 08:52:29 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	nbr;

	if (nb < 0)
		return (0);
	nbr = nb;
	if (nb > 1)
		return (nbr * ft_recursive_factorial(--nb));
	return (1);
}
