/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:44:18 by avillard          #+#    #+#             */
/*   Updated: 2022/08/12 09:17:55 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

typedef char*	string;

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[1])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
