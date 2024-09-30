/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:21:33 by gserafio          #+#    #+#             */
/*   Updated: 2024/08/29 15:21:37 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	number_of_minus;

	sign = -1;
	result = 0;
	number_of_minus = 0;
	while (*str == ' ' || (*str >= 7 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			number_of_minus++;
		str++;
	}
	if (number_of_minus % 2 == 0)
		sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int main(void)
{
	char	input[] = "\n\t1234\v--+--";
	ft_atoi(input);
	return (0);
}
*/
