/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:18:31 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/22 13:18:34 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	string[] = "ADSADAHDUA";
	printf("%s",ft_strlowcase(string));
	return (0);
}
*/
