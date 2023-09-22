/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:49:09 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/21 18:56:17 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (*(str + ++i) != '\0')
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 32;
	return (str);
}
