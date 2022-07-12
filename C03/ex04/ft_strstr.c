/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:12:17 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/21 19:36:38 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[i2] && str[i] != '\0' && to_find[i2] != '\0')
		{
			i++;
			i2++;
		}
		if (to_find[i2] == '\0')
			return (str);
		str++;
	}
	return (0);
}
