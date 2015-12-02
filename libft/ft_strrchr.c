/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:59:20 by qduperon          #+#    #+#             */
/*   Updated: 2015/11/27 11:19:49 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != (char)c)
			i++;
		if (s[i] == (char)c)
		{
			n = i;
			i++;
		}
	}
	if (n == 0)
		return (NULL);
	else
		return ((char *)s + n);
}
