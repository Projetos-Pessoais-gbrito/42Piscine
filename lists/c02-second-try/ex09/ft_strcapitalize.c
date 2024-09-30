/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:28:21 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/22 14:28:24 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	test[] = "oi, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s", ft_strcapitalize(test));
	return (0);
}
