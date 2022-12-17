/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:33:58 by sguarien          #+#    #+#             */
/*   Updated: 2022/12/14 19:39:00 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*the function has to handle the following conversions: cspdiuxX%
so it has to print: character(%c); string(%s); void * pointer argument
in hexadecimal format(%p); decimal number-base 10(%d); integer-base 10
(%i); unsigned decimal-base 10 (%u); number in hexadecimal lowercase
format-base 16 (%x); number in hexadecimal uppercase format-base 16
(%X); percent sign (%%)*/
#include "../ft_printf.h"

int	ft_printf_arg(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_putpointer(va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnumb(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_puthexadecimal(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	size_t		i;
	int			length;

	if (!format)
		return (-1);
	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += ft_printf_arg(args, format[i + 1]);
			i++;
		}
		else
			length += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}
/*
int main(void)
{
	int c;
	char s[] = "Yor Forger";
	void *p;
	int d;
	int i;
	unsigned int u;
	unsigned int x;
	unsigned int X;
	c = 'X';
	p = &s;
	d = 31731;
	i = -9428;
	u = 84274;
	x = 46433;
	X = 46433;
	printf("Printed by my function:\n");
	ft_printf("Char:         %c\n", c);
	ft_printf("String:       %s\n", s);
	ft_printf("Pointer:      %p\n", p);
	ft_printf("Int:          %d\n", d);
	ft_printf("Int:          %i\n", i);
	ft_printf("Unsigned int: %u\n", u);
	ft_printf("Low Hex:      %x\n", x);
	ft_printf("High Hex:     %X\n", X);
	ft_printf("Percentagem:  %%\n");
	ft_printf("Mix: %c next %s proxi %p anda %d ou %u wtf\n", c, s, p, d, u);
	printf("Printed by the original:\n");
	printf("Char:         %c\n", c);
	printf("String:       %s\n", s);
	printf("Pointer:      %p\n", p);
	printf("Int:          %d\n", d);
	printf("Int:          %i\n", i);
	printf("Unsigned int: %u\n", u);
	printf("Low Hex:      %x\n", x);
	printf("High Hex:     %X\n", X);
	printf("Percentagem:  %%\n");
	printf("Mix: %c next %s proxi %p anda %d ou %u wtf\n", c, s, p, d, u);
}
*/