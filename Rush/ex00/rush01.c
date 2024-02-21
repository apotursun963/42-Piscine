/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:38:05 by fdisci            #+#    #+#             */
/*   Updated: 2024/01/28 19:16:22 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_error(int x, int y);
void	ft_line(int x, int a, int b, int c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "ERROR", 5);
		return ;
	}
}

void	ft_line(int x, int a, int b, int c)
{
	int	i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while (i < (x - 2))
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	ft_error(x, y);
	i = 0;
	if (y >= 1 && x >= 1)
		ft_line(x, '/', '*', '\\');
	while (i < y - 2 && x >= 1)
	{
		ft_line(x, '*', ' ', '*');
		i++;
	}
	if (y >= 2 && x >= 1)
		ft_line(x, '\\', '*', '/');
}
