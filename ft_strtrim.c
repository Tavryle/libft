/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:06:02 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/14 15:09:38 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*dst;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)(s)) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (s[i] == '\0')
			return (ft_strnew(0));
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		if (!(dst = (char*)malloc(sizeof(*dst) * (j - i + 2))))
			return (NULL);
		k = 0;
		while (i <= j)
		{
			dst[k++] = s[i];
			i++;
		}
		dst[k] = '\0';         
		return (dst);
	}
	return (NULL);
}
