/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:48:02 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/20 17:44:31 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//#include <stdio.h>
// int	main(void)
// {
// 	char teste[] = "teste";
// 	char nome [] = "joao";
// 	ft_strcpy (teste, nome);
// 	printf("%s\n", teste);
// }
//gcc -Wall -Wextra -Werror ft_strcpy.c && ./a.out