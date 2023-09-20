/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:52:50 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/17 19:13:08 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;
	int	minor;

	i = 0;
	while (i < size)
	{
		j = i;
		minor = i;
		while (++j < size)
			if (tab[j] < tab[minor])
				minor = j;
		if (i != minor)
		{
			tmp = tab[i];
			tab[i] = tab[minor];
			tab[minor] = tmp;
		}
		i++;
	}
}
