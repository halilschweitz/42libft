/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacikar <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:18:46 by hsacikar          #+#    #+#             */
/*   Updated: 2022/01/08 20:18:46 by hsacikar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
}
