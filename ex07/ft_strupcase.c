/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:27:54 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:10:57 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (*(str + count) >= 'a' && *(str + count) <= 'z')
			*(str + count) = *(str + count) + 'A' - 'a';
		count++;
	}
	return (str);
}
