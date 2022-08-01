/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:11:01 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/31 16:04:22 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_atohex(char str)
{
	char	*base;

	base = "0123456789abcdef";
	if (str > 0)
	{
		ft_atohex(str / 16);
		write(1, &base[str % 16], 1);
	}
	else if (str == 0)
		write(1, "0", 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 32 && str[letter] < 127)
			write(1, &str[letter], 1);
		else
		{
			write(1, "\\", 1);
			ft_atohex(str[letter]);
		}
		letter++;
	}
}
