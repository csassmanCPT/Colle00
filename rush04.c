/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csassman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:22:30 by csassman          #+#    #+#             */
/*   Updated: 2020/07/14 13:33:28 by csassman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void     rush(int x, int y) {
    int     xindx = 1;
    int     yindx = 2;
    while (xindx <= x) {
        if (xindx == 1) {
            ft_putchar('A');
        }
		else if (xindx == x) {
			ft_putchar('C');
		}
		else {
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
        if (x == 1) {
            ft_putchar('\n');
            yindx++;
        } else {
        ft_putchar('B');
        ft_putchar('\n');
        yindx++;
        }
    }
    xindx = 1;
    while (xindx <= x)
    {
        if (y == 1) {
            xindx = x;
        }
        else if (xindx == 1) {
            ft_putchar('C');
		}
		else if (xindx == x) {
			ft_putchar('A');
		}
        else {
            ft_putchar('B');
        }
        xindx++;
    }
    ft_putchar('\n');
}

