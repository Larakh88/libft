/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:43:46 by lel-khou          #+#    #+#             */
/*   Updated: 2021/11/21 15:58:19 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst == 0 || del == 0)
		return ;
	while (*lst)
	{
		del(*lst->content);
		free (*lst);
		*lst = *lst->next;
	}	
}
