/*Recibe <index>, y t_ring.slots. Retorna el indice anterior. Cuando <index> sea 0
retornara el ultimo indice del buffer t_ring.buff, de acuerdo con la lógica circular*/
inline int ring_prev_index(int index, int slots)
{
	return ((index - 1 + slots) % slots);
}