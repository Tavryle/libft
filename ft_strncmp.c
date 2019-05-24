/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:50:44 by tmansing          #+#    #+#             */
/*   Updated: 2019/05/24 08:55:27 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	return (*s1 - *s2);
}

int	main(void)
{
	char s1[] = "breen";
	char s2[] = "dlue";
	size_t i;

	i = '3';
	printf("%d\n", ft_strncmp(s1, s2, i));
	return (0);
}
