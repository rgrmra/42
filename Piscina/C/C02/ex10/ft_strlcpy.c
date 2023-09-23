/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:26:10 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/22 19:09:21 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	if (size > 0)
	{
		while (*src != '\0' && len < (size - 1))
			*(dest + len++) = *src++;
		*(dest + len) = '\0';
	}
	while (*src++ != '\0')
		len++;
	return (len);
}
