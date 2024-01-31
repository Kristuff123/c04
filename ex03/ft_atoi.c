/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 08:31:41 by kristof           #+#    #+#             */
/*   Updated: 2024/01/31 08:47:20 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
		int		i;
		int		sign;

		i = 0;
		sign = 1;
		while (*str == 32 || (*str >= 9 && *str <= 13))
				str++;
		while (*str == '-' || *str == '+')
		{
				if (*str == '-')
						sign *= -1;
				str++;
		}
		while (*str >= '0' && *str <= '9')
		{
				i = i * 10 + *str - '0';
				str++;
		}
		return (i * sign);
}

int		main(void)
{
		char str[] = "       \t 123345666666-6-6-612abcda";
		int		result = ft_atoi(str);

		printf("we take string: %s\n", str);
		printf("apply ft_atoi \n");
		printf("and here is what we get as a result: %d\n", result);
		return (0);
}
