/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:24:31 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/27 22:44:28 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	int letter;
	int digit[2];
	int counter;

	letter = 0;
	digit[0] = 10;
	counter = 0;
	while (str[letter] != '0')
	{
		if (str[letter] >= 32 && str[letter] <= 127)
			write(1, &str[letter], 1);
		else
		{
			while ( digit[counter] / 10 > 0)
			{
				if (counter == 0)
					digit[counter] = str[letter] % 16;
				else
					digit[counter] = (str[letter] / 16) % 16;
				counter++;
			}
			write(1, "\\", 1);
			while (counter > -1)
			{
				if (digit[counter] < 10)
				{
					digit[counter] += '0';
					write(1, &digit[counter], 1);
				}
				else
				{
					digit[counter] = digit[counter] + 'A' - 10;
					write(1, &digit[counter], 1);
				}
			}
		}
				

