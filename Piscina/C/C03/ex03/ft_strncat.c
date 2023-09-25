/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:29:45 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/22 19:39:40 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*src != '\0' && nb-- > 0)
		*(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (dest);
}
