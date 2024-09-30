/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:28:53 by gserafio          #+#    #+#             */
/*   Updated: 2024/09/04 17:28:55 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char *argv[], int argc)
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

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	*temp;
	int		i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
		{
			i++;
		}
	}
	ft_putchar(argv, argc);
}

int	main(int argc, char	*argv[])
{
	ft_sort_params(argc, argv);
	return (0);
}
