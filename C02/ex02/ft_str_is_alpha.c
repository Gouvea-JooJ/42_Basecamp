/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 00:37:20 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:46:09 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
		return (check);
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			check = 0;
		i++;
	}
	return (check);
}
//#include <stdio.h>
// int	main(void)
// {
// 	int check;
// 	char teste[] = "jopedro";
// 	check = ft_str_is_alpha(teste);
// 	printf("%d\n", check);
// }
//gcc -Wall -Wextra -Werror ft_str_is_alpha.c && ./a.out