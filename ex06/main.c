/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:28:45 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:08:31 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_str_is_printable(char *str);

int     main(void)
{
        printf("%d  %d\n", ft_str_is_printable("Merhaba"), ft_str_is_printable("Merh\naba"));
}
