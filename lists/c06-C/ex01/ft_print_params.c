/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:31:04 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/04 19:31:06 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_params(int argc, char*argv[])
{
	int	j;

	j = 1;
	while (argc > 1)
	{
		while (*argv[j])
		{
			write(1, argv[j], 1);
			argv[j]++;
		}
		write(1, "\n", 1);
		argc--;
		j++;
	}
}

int	main(int argc, char*argv[])
{
	ft_print_params(argc, argv);
	return (0);
}
