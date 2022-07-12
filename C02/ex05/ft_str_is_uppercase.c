/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:32:11 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:47:25 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
		return (check);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		check = 0;
		i++;
	}
	return (check);
}
//#include <stdio.h>
// int	main(void)
// {
// 	int check;
// 	char teste[] = "JOPEDRO";
// 	check = ft_str_is_uppercase(teste);
// 	printf("%d\n", check);
// }
//gcc -Wall -Wextra -Werror ft_str_is_uppercase.c && ./a.out