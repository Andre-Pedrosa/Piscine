/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 04:13:34 by apedrosa          #+#    #+#             */
/*   Updated: 2022/09/28 22:26:45 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (i < nb || nb <= 1)
	{
		if (nb % i == 0 || nb <= 1)
			return (0);
		i++;
	}
	return (1);
}