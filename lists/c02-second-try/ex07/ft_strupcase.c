/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:56:10 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/22 12:56:13 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 97 && str[i] <= 122))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	string2[] = "asfsafsafsaAAf";
	char	*string;
	//char	char_returned[] = "sdgadhasda";
	
	string = ft_strupcase(string2);
	printf("%s", string);
	return (0);
}
*/