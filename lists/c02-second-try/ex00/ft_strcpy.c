/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:02:44 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/20 15:02:50 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

#include <stdio.h>

void	define_string_to_copy(void)
{
	char	src[10];
	char	destiny[10 + 1];

	printf("%s", ft_strcpy(src, destiny));
	
}

int	main(void)
{
	define_string_to_copy();
	return (0);
}
