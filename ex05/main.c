/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:28:45 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 13:07:01 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_str_is_uppercase(char *str);

int     main(void)
{
        printf("%d  %d\n", ft_str_is_uppercase("MERHABA"), ft_str_is_uppercase("MeRHaBa"));
}
