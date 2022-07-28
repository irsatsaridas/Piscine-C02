/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:28:45 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:18:30 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcapitalize(char *str);

int     main(void)
{
        char str[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
        printf("%s\n", ft_strcapitalize(str));
}
