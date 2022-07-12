/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:19:29 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:47:05 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
		return (check);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
// 	check = ft_str_is_lowercase(teste);
// 	printf("%d\n", check);
// }
// gcc -Wall -Wextra -Werror ft_str_is_lowercase.c && ./a.out