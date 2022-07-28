/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:36:01 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:15:29 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (*(str + count) >= 'A' && *(str + count) <= 'Z')
			*(str + count) = *(str + count) - 'A' + 'a';
		count++;
	}
	return (str);
}
