/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:03:33 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/31 15:39:39 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	contr;
	unsigned int	i;

	i = 0;
	contr = 1;
	while (i < n)
	{
		if (*(src + i) != '\0' && contr)
			*(dest + i) = *(src + i);
		else
		{
			*(dest + i) = '\0';
			contr = 0;
		}
		i++;
	}
	return (dest);
}
