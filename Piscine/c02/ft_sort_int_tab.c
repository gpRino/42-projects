#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int scambio;
	int temp;

	scambio = 1;

	while (scambio)
	{
        scambio = 0;
		i = 0;
		
		while (i < size - 1)
		{
			if (tab[i] < tab[i + 1])
			{
				temp = tab[i];
	            tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				scambio = 1;
			}
			i++;
		}
	}
}
int main()
{
    int arr[] = {7, 0, 9, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    ft_sort_int_tab(arr, n);
    
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    return 0;
}
