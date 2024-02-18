/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benkhjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:20:40 by benkhjar          #+#    #+#             */
/*   Updated: 2024/02/18 19:03:20 by benkhjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	j = 2;
	count = 0;
	ft_putchar('/');
	while (i <= y)
	{
		if (count == 0)
			count++;
		else
			j = 1;
		while (j <= x)
		{
			if (((i == y && j == x)) && (j != 1 && i != 1))	
				ft_putchar('/');
			else if (((j == x) && (i == 1) || (i == y) && (j == 1)))
				ft_putchar('\\');
			else if ((i == 1) || (i == y) || (j == 1) || (j == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
