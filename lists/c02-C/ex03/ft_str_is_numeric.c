/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:38:10 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/21 22:38:14 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 48 && str[i] <= 57)))
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
	char	string[] = "zsfgfsaf";
	//char	string[] = "asdadsa";
	int		int_to_return;

	int_to_return = ft_str_is_numeric(string);
	printf("%d", int_to_return);
	return (0);
}
*/