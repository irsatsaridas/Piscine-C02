/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:10:53 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:00:59 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	loc;

	loc = 0;
	while (*(str + loc) != '\0')
	{
		if (*(str + loc) < 'A' || *(str + loc) > 'Z')
			return (0);
		loc++;
	}
	return (1);
}
