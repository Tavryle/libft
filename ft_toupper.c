/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:42:17 by tmansing          #+#    #+#             */
/*   Updated: 2019/05/21 11:20:25 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	int i;

	i = 0;
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
