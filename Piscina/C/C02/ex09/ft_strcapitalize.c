/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:00:37 by rde-mour          #+#    #+#             */
/*   Updated: 2023/09/21 19:53:02 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_capitalize(char *str)
{
	int	i;

	i = 0;
	if (*(str) >= 'a' && *(str) <= 'z')
		*(str) -= 32;
	while (*(str + ++i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) += 32;
		if ((*(str + i) >= 'a' && *(str + i) <= 'z')
			&& (*(str + i - 1) < 'a' || *(str + i - 1) > 'z')
			&& (*(str + i - 1) < 'A' || *(str + i - 1) > 'Z')
			&& (*(str + i - 1) < '0' || *(str + i - 1) > '9'))
				*(str + i) -= 32;
	}
	return (str);
}