/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 05:10:14 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:47:42 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	if (str[i] == '\0')
		return (check);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		check = 0;
		i++;
	}
	return (check);
}
//#include <stdio.h>
// int main (void)
// {
// 	int check;
// 	char teste[] = "jopedro";
// 	check = ft_str_is_printable(teste);
// 	printf("%d\n", check);
// }
//gcc -Wall -Wextra -Werror ft_str_is_printable.c && ./a.out