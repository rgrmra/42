/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:47:31 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/23 09:43:55 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (*(dest + i) != '\0' && i < size)
		i++;
	while (*(src + j) != '\0')
		j++;
	if (i == size || j == size)
		return (i + j);
	while (*(src + k) != '\0' && (i + k) < (size - 1))
	{
		*(dest + i + k) = *(src + k);
		k++;
	}
	*(dest + i + k) = '\0';
	return (i + j);
}
