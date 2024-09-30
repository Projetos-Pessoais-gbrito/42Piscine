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
	unsigned int	result;

	i = 0;
	dest_len = 0;
	src_len = 0;
	result = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	result = src_len;
	if (size < dest_len)
		result += size;
	else
		result += dest_len;
	while (src[i] && dest_len < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (result);
}

#include <stdio.h>
#include <string.h>
int main() {
    char dest[19] = "truncate this";
    char *src = " string... but not this!";
	printf("%u\n", ft_strlcat(dest, src, 13));
    return 0;
}
