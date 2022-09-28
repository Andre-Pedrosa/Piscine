/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:45:39 by apedrosa          #+#    #+#             */
/*   Updated: 2022/09/14 13:21:04 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int a, int b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + 48, a % 10 + 48);
			write(1, " ", 1);
			ft_putchar(b / 10 + 48, b % 10 + 48);
			if (a == 98 && b == 99)
				break ;
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
}
