#include <stdio.h>
//void ft_swap(int *a, int *b)
//{
//	int tmp = *a;
//
//	*a = *b;
//	*b = tmp;
//}

int sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int swapped = 1;
	int tmpSwap = 0;
	int median = 0;

	while (swapped == 1)
	{
		i = 1;
		swapped = 0;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				tmpSwap = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = tmpSwap;
				swapped = 1;
			}
			i++;
		}
	}
	if (size % 2 == 0)
		median = tab[(size / 2) - 1];
	else
		median = tab[size / 2];
	return (median);
}

int main()
{
	int tab[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i = 0;

	int median = sort_int_tab(tab, 9);
	while (i < 9)
	{
		printf("Valeur a l'element %d : %d\n", i, tab[i]);
		i++;
	}
	printf("La mediane est %d\n", median);
	return (0);
}