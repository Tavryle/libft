/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:17:01 by tmansing          #+#    #+#             */
/*   Updated: 2019/05/20 16:23:12 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	int i;

	i = 0;
	if (c >= 33 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int a;

	a = ft_isprint('d');
	printf("%d\n", a);
	return (0);
}
