/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:39:27 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 12:40:07 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[6] = {'h', 'e', 'd', 'e', 'f', '\0'};
	char	src[6] = { 'm', 'e', 't', 'i', 'n', '\0' };
	printf("%s\n%s\n", ft_strcpy(dest, src), src);
}
