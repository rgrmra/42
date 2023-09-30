/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:17:23 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/30 08:29:22 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_remove_extra(char **str, int *sign)
{
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			*sign += 1;
		(*str)++;
	}
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
		while ((*(base + i) == *(base + j)) || (*(base + i) == ' ')
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

void	ft_check_number(char *str, char *base, int *nb, int *bs)
{
	int	i;

	while (*str != '\0')
	{
		i = 0;
		while (*(base + i) != '\0')
		{
			if (*(base + i) == *str)
			{
				*nb *= *bs;
				*nb += i;
				break ;
			}
			i++;
		}
		if (*(base + i) != *str++)
			return ;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	bs;
	int	nb;

	nb = 0;
	bs = 0;
	sign = 0;
	ft_remove_extra(&str, &sign);
	ft_check_base(base, &bs);
	if (bs == 0)
		return (0);
	ft_check_number(str, base, &nb, &bs);
	if (sign % 2 == 1)
		nb = -nb;
	return (nb);
}
