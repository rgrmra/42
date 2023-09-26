/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:40:14 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/22 21:06:46 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;
	int	size;

	size = 0;
	while (*(to_find + size) != '\0')
		size++;
	if (size == 0)
		return (str);
	i = 0;
	len = 0;
	while (*(str + len) != '\0')
	{
		if (*(str + len) != *(to_find + i))
			i = 0;
		else
			if (++i == size)
				return (&str[++len - size]);
		len++;
	}
	return (0);
}
