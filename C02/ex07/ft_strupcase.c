/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:18:09 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:48:09 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
//#include <stdio.h>
// int main (void)
// {
// 	char user[] = "jopedro2";
// 	ft_strupcase(user);
// 	printf("%s\n", user);
// }
//gcc -Wall -Wextra -Werror ft_strupcase.c && ./a.out