/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:55:11 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/27 11:55:13 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char	dest[] = "Gustavo";
	char	src[] = "Serafio";
	ft_strcat(dest, src);
	return (0);
}
