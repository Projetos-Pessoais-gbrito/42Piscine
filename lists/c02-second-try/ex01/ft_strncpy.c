/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:51:51 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/20 19:51:55 by gserafio         ###   ########.fr       */
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
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>

void	define_value_to_make_strncpy(void)
{
	char	dest[20];
	char	src[] = "helsahdisahdisahdisadsahdsadshauidsh";
	int		n;
	int 	i;

	n = 22;
	i = 0;
	printf("%s", ft_strncpy(dest, src, n));
}

int	main(void)
{
	define_value_to_make_strncpy();
	return (0);
}
