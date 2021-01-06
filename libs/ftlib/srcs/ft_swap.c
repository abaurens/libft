/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:53:44 by abaurens          #+#    #+#             */
/*   Updated: 2021/01/05 17:40:14 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include <alloca.h>

static uint32_t	swap_64bits(uint64_t *ptr1, uint64_t *ptr2, uint32_t size)
{
	uint64_t	tmp;
	uint32_t	i;

	i = 0;
	while ((size - i) > sizeof(uint64_t))
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
		i += sizeof(uint64_t);
		ptr1++;
		ptr2++;
	}
	return (i);
}

static uint32_t	swap_32bits(uint32_t *ptr1, uint32_t *ptr2, uint32_t size)
{
	uint32_t	tmp;
	uint32_t	i;

	i = 0;
	while ((size - i) > sizeof(uint32_t))
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
		i += sizeof(uint32_t);
		ptr1++;
		ptr2++;
	}
	return (i);
}

static uint32_t	swap_16bits(uint16_t *ptr1, uint16_t *ptr2, uint32_t size)
{
	uint16_t	tmp;
	uint32_t	i;

	i = 0;
	while ((size - i) > sizeof(uint16_t))
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
		i += sizeof(uint16_t);
		ptr1++;
		ptr2++;
	}
	return (i);
}

static uint32_t	swap_8bits(uint8_t *ptr1, uint8_t *ptr2, uint32_t size)
{
	uint8_t		tmp;
	uint32_t	i;

	i = 0;
	while ((size - i) > sizeof(uint8_t))
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
		i += sizeof(uint8_t);
		ptr1++;
		ptr2++;
	}
	return (i);
}

void			ft_swap(void *ptr1, void *ptr2, uint32_t size)
{
	uint8_t		*p1;
	uint8_t		*p2;
	uint32_t	step;
	uint32_t	i;
	uint32_t	(*swapers[4])(void *, void *, uint32_t);

	i = 0;
	p1 = ptr1;
	p2 = ptr2;
	swapers[0] = (uint32_t (*)(void *, void *, uint32_t))swap_64bits;
	swapers[1] = (uint32_t (*)(void *, void *, uint32_t))swap_32bits;
	swapers[2] = (uint32_t (*)(void *, void *, uint32_t))swap_16bits;
	swapers[3] = (uint32_t (*)(void *, void *, uint32_t))swap_8bits;
	while (i < 4)
	{
		step = swapers[i++]((void *)p1, (void *)p2, size);
		size -= step;
		p1 += step;
		p2 += step;
	}
	/*
	step = swap_64bits((uint64_t *)p1, (uint64_t *)p2, size);
	size -= step;
	p1 += step;
	p2 += step;
	step = swap_32bits((uint32_t *)p1, (uint32_t *)p2, size);
	size -= step;
	p1 += step;
	p2 += step;
	step = swap_16bits((uint16_t *)p1, (uint16_t *)p2, size);
	size -= step;
	p1 += step;
	p2 += step;
	step = swap_8bits((uint8_t *)p1, (uint8_t *)p2, size);
	size -= step;
	p1 += step;
	p2 += step;
	*/
}
