/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:46:05 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:34:44 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str1[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', '\0'};
	char str2[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("%d  %s",ft_strlcpy(str1, str2, 6), str1);
}
