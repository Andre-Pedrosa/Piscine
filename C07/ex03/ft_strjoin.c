/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:20:35 by apedrosa          #+#    #+#             */
/*   Updated: 2022/09/28 22:39:06 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest += src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int 	final_lenght;
	char	*buffer;
	char	*d;

	final_lenght = 0;
	while (strs[i])
	{	
		final_lenght += ft_strlen(strs[i]);
		i++;
	}
	final_lenght += ft_strlen(sep) * (size - 1);
	

	d = (buffer = (char *)malloc(sizeof(char) * (get_char_count_strs(strs) + get_char_count_sep(size, sep))));
	if (!d)
	{
		return (0);
	}
	
	i = 1;
	ft_strcpy(buffer, strs[0]);
	while (i < size)
	{
		
	}
	return (buffer);
}


int main (int argc, char **argv)
{
	char	*sep = ", ";
	//printf("[%d]\n", get_char_count_strs(argv));	
	//printf("[%d]\n", get_char_count_sep(argc, sep));
	char *test = ft_strjoin(argc, argv, sep);
	
	int		i = 0;
	while (test[i])
	{
		printf("%c", test[i]);
		i++;
	}
}