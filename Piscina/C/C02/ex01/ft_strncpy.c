/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:59:39 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/21 07:25:54 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *src != '\0')
		*(dest + i++) = *src++;
	while (i < n)
		*(dest + i++) = '\0';
	return (dest);
}
