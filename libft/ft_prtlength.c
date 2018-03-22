/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:11:59 by lchappon          #+#    #+#             */
/*   Updated: 2017/12/17 14:41:26 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_prtlength(char const *s, char c)
{
	int		length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}
