/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:48:16 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/28 12:58:35 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d   %d\n", ft_str_is_alpha("merh@ba"), ft_str_is_alpha("merhaba"));
}
