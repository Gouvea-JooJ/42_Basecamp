/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:01:36 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:46:40 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
		return (check);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		check = 0;
		i++;
	}
	return (check);
}
//#include <stdio.h>
// int	main(void)
// {
// 	int check;
// 	char teste[] = "123";
// 	check = ft_str_is_numeric(teste);
// 	printf("%d\n", check);
// }
//gcc -Wall -Wextra -Werror ft_str_is_numeric.c && ./a.out