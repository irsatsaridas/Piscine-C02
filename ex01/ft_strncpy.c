/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:03:33 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:00:07 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count;
	int	control;

	count = 0;
	control = 0;
	while (n > 0)
	{
		if (*(src + count) != '\0'  && control)
			*(dest + count) = *(src + count);
		else
		{
			*(dest + count) = '\0'
			control = 0;	
		}
		count++;
		n--;
	}
	*(dest + count - 1) = '\0';
	return (dest);
}
