/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:11:01 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 00:02:40 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_atohex(char str)
{
	char	digit_1;
	char	digit_2;

	digit_2 = str % 16;
	digit_1 = str / 16 + '0';
	write(1, "\\", 1);
	write(1, &digit_1, 1);
	if (digit_2 < 10)
		digit_2 += '0';
	else
		digit_2 = digit_2 - 10 + 'a';
	write(1, &digit_2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 32)
			write(1, &str[letter], 1);
		else
			ft_atohex(str[letter]);
		letter++;
	}
}
