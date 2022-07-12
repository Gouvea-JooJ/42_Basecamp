/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:47:37 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/17 19:10:12 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = ;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	int lenght;
	char *test;
	
	test = "jopedro2";

	lenght = ft_strlen(test);
	printf("%d\n", lenght);
	return 0;
}

// gcc -Wall -Wextra -Werror ft_strlen.c && ./a.out