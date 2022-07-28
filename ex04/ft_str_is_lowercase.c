/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:03:34 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:00:39 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	loc;

	loc = 0;
	while (*(str + loc) != '\0')
	{
		if (*(str + loc) < 'a' || *(str + loc) > 'z')
			return (0);
		loc++;
	}
	return (1);
}
