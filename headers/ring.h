#ifndef RING_H
#define RING_H

#include <stddef.h>

typedef int t_level;
typedef struct s_ring
{
	int	*buff;
	int	head;
	int	tail;
	int	slots;
	int	fill;
	int max_fill;
}	t_ring;

t_ring	*ring_init(int size);
int		ring_next_index(int index, int slots);
int		ring_prev_index(int index, int slots);
int	 	ring_get_head(t_ring *stack);
int		ring_get_tail(t_ring *stack);
int		ring_pop_head(t_ring *arr);
int		ring_add_head(t_ring *arr, int elem);
int		ring_rotate(t_ring *arr);
int		ring_reverse_rotate(t_ring *arr);
int		ring_swap(t_ring *arr);
int		ring_push(t_ring *from, t_ring *to);
void	ring_free(t_ring *arr);
int		ring_index_get_level(t_ring *arr, int index);
int		ring_get_level(const t_ring *arr, t_level level);
int		ring_find_smalest(t_ring *stack);
int		ring_find_bigest(t_ring *ring);

#endif