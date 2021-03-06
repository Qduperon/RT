/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:02:52 by qduperon          #+#    #+#             */
/*   Updated: 2015/12/08 15:11:23 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size_base(int c, int base)
{
	int i;

	i = 1;
	if (c < 0)
		c = -c;
	while (c >= base)
	{
		c /= base;
		i++;
	}
	return (i);
}
