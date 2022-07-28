/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:48:06 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:27:32 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	if (count == 0 && str[count] > 96 && str[count] < 123)
		str[count] = str[count] - 'a' + 'A';
	while (*(str + count) != '\0')
	{
		if (str[count] < 97 || str[count] > 122)
		{
			if (str[count] < 65 || str[count] > 90)
				if (str[count] < 48 || str[count] > 57)
					if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
						str[count + 1] = str[count + 1] - 'a' + 'A';
		}
		count++;
	}
	return (str);
}
