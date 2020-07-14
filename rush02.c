/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csassman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:15:12 by csassman          #+#    #+#             */
/*   Updated: 2020/07/14 13:19:16 by csassman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void     rush(int x, int y) {
    int     xindx;
    int     yindx;
    xindx = 1;
    yindx = 2;
    while (xindx <= x) {
        if (xindx == 1 || xindx == x) {
            ft_putchar('A');
        } else {
            ft_putchar('B');
            }
        xindx++;
        }
    xindx = 2;
    ft_putchar('\n');
    while (yindx < y)
    {
        ft_putchar('B');
        while (xindx < x)
        {
            ft_putchar(' ');
            xindx++;
        }
        xindx = 2;
        ft_putchar('B');
        ft_putchar('\n');
        yindx++;
    }
    xindx = 1;
    while (xindx <= x)
    {
        if (y == 1) {
            xindx = x;
        }
        else if (xindx == 1 || xindx == x) {
            ft_putchar('C');
                
        } else {
            ft_putchar('B');
        }
        xindx++;
    }
    ft_putchar('\n');
}

