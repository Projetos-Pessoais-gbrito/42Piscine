/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:34:44 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/22 12:34:49 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	//char	string[] = "adsasadassadAAAAAsadsa";
	char	string[] = "asdsd";
	int		int_to_return;

	int_to_return = ft_str_is_lowercase(string);
	printf("%d", int_to_return);
	return (0);
}
*/