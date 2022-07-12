/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:50:04 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:48:34 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
//#include <stdio.h>
// int main (void)
// {
// 	char user[] = "JOPEDRO2";
// 	ft_strlowcase(user);
// 	printf("%s\n", user);
// }
//gcc -Wall -Wextra -Werror ft_strlowcase.c && ./a.out