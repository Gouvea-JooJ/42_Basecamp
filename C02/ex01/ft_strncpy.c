/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:38:43 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:45:39 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//#include <stdio.h>
// int	main(void)
// {
// 	char teste[] = "teste";
// 	char nome[] = "joao";
// 	int n = 2;
// 	ft_strncpy(teste, nome, n);
// 	printf("%s\n", teste);
// }
//gcc -Wall -Wextra -Werror ft_strncpy.c && ./a.out