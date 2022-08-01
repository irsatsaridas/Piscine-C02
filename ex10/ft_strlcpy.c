/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:46:05 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/31 16:00:16 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	letter;
	unsigned int	lenght;

	letter = 0;
	length = 0;
	while (src[length])
		length++;
	if (size < 1)
		return (length);
	while (size - 1 > letter && src[letter] != '\0')
	{
		dest[letter] = src[letter];
		letter++;
	}
	dest[letter] = '\0';
	return (length);
}
