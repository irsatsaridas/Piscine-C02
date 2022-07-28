/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:39:27 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 12:44:40 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int     main(void)
{
        char    dest[6] = {'h', 'e', 'd', 'e', 'f', '\0'};
        char    src[6] = { 'm', 'e', 't', 'i', 'n', '\0' };
        printf("%s\n%s\n", ft_strncpy(dest, src, 6), src);
}
