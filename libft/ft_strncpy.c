/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:05:45 by lchappon          #+#    #+#             */
/*   Updated: 2017/12/17 14:44:52 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;

	i = 0;
	while (src[i] && len > 0)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len > 0)
	{
		dst[i] = '\0';
		i++;
		len--;
	}
	return (dst);
}
