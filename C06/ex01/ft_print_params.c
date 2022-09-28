/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:52:24 by apedrosa          #+#    #+#             */
/*   Updated: 2022/09/25 05:32:16 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int		param;
	int		i;

	param = 1;
	i = 0;
	while (argc >= 2 && param != argc)
	{
		write(1, &argv[param][i], 1);
		i++;
		if (argv[param][i] == '\0')
		{
			param++;
			i = 0;
			write(1, "\n", 1);
		}	
	}
	return (0);
}
