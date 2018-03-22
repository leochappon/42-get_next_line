/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:07:39 by lchappon          #+#    #+#             */
/*   Updated: 2017/12/17 14:41:20 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_prtcount(char const *s, char c)
{
	int		i;
	int		part;
	int		count;

	i = 0;
	part = 0;
	count = 0;
	while (s[i])
	{
		if (part == 1 && s[i] == c)
			part = 0;
		if (part == 0 && s[i] != c)
		{
			part = 1;
			count++;
		}
		i++;
	}
	return (count);
}
