/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 07:00:15 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/29 07:42:30 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

void	ft_remove_space(char **str)
{
	while (**str != '\0' && (**str == ' ' || (**str >= 9 && **str <= 13)))
		(*str)++;
}

void	ft_remove_sign(char **str, int *sign)
{
	while (**str != '\0' && (**str == '+' || **str == '-'))
	{
		if (**str == '-')
			*sign += 1;
		(*str)++;
	}
}

int	ft_atoi(char *str)
{
	int		sign;
	long	nb;

	nb = 0;
	sign = 0;
	ft_remove_space(&str);
	ft_remove_sign(&str, &sign);
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	if (sign % 2 == 1)
		nb = -nb;
	return ((int) nb);
}
