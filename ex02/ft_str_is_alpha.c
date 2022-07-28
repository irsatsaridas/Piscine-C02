/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:15:13 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 12:59:33 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	loc;

	loc = 0;
	while (*(str + loc) != '\0')
	{
		if (str[loc] < 'A' || str[loc] > 'Z')
			if (str[loc] < 'a' || str[loc] > 'z')
				return (0);
		loc++;
	}
	return (1);
}
