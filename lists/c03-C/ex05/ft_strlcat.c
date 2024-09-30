/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:45:42 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/27 18:45:51 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	while (src[src_len])
	{
		src_len++;
	}
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}	
	dest[dest_len + i] = '\0';
	return (size + src_len);
}


#include <stdio.h>
int main() {
    char dest[13] = "truncate this";
    char *src = " string... but not this!";
    // Concatena src ao final de dest, 
	// garantindo que o buffer não seja ultrapassado
    // Exibe o resultado
	printf("%u\n", ft_strlcat(dest, src, 13));
    return 0;
}
