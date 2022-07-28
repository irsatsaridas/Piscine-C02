/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:46:05 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:36:18 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	letter;
	int	lenght;

	letter = 0;
	lenght = 1;
	while (size -1 > 0)
	{
		dest[letter] = src[letter];
		letter++;
		if (src[letter] != '\0')
			lenght++;
		size--;
	}
	if (size != 0)
		dest[letter] = '\0';
	return (lenght);
}
