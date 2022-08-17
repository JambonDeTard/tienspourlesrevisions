/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:37:17 by avillard          #+#    #+#             */
/*   Updated: 2022/08/15 11:09:11 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	digit(char c)
{
	int	num;

	if (c >= '0' && '9' >= c)
		num = c - '0';
	else if (c >= 'a' && 'f' >= c)
		num = c - '0' - 39;
	else if (c >= 'A' && 'F' >= c)
		num = c - '0' - 7;
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	sign;
	int	c;

	result = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		c = digit(str[i]);
		result = result * str_base + c;
		i++;
	}
	return (result * sign);
}
