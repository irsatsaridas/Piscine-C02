/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:48:06 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/31 15:50:30 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	if (count == 0 && str[count] >= 'a' && str[count] <= 'z')
		str[count] = str[count] - 'a' + 'A';
	while (*(str + count) != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (!(str[count - 1] >= 'a' && str[count - 1] <= 'z'))
			{
				if (!(str[count - 1] >= '0' && str[count - 1] <= '9'))
				{
					if (!(str[count - 1] <= 'Z' && str[count - 1] >= 'A'))
					{
						str[count] -= 32;
					}
				}
			}
		}
		count++;
	}
	return (str);
}
