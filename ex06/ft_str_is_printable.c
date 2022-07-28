/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:13:41 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:01:11 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	loc;

	loc = 0;
	while (*(str + loc) != '\0')
	{
		if (*(str + loc) < 32 || *(str + loc) > 127)
			return (0);
		loc++;
	}
	return (1);
}
