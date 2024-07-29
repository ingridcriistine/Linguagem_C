#include <stdio.h>

void swap(int * array, int i, int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

void _quick_sort(int * array, int begin, int end)
{
	if(end <= begin)
	{
		return;
	}
	
	int i = begin;
	int j = end;
	
	while(i != j)
	{
		while(j > i && array[j] >= array[i])
		{
			j--;
		}
		swap(array, i, j);
		
		while(i < j && array[i] <= array[j])
		{
			i++;
		}
		swap(array, i, j);
	}
	
	_quick_sort(array, begin, i - 1);
	_quick_sort(array, i + 1, end);
}

void quickSort(int * array, int size) {

    _quick_sort(array, 0, size-1);
}

int main() {
    
    int size;

    printf("\n\nDigite a quantidade de elementos que voce deseja adicionar: ");
    scanf("%i", &size);

    int * array = malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++) {

        printf("\nElemento %i: ", i+1);
        scanf("%i", &array[i]);

    }

    printf("\n\nAntes da ordenacao");
    printf("\n");
    for(int i = 0; i < size; i++) {

        printf(" %i ", array[i]);
    }

    quickSort(array, size);

    printf("\n\nDepois da ordenacao");
    printf("\n");
    for(int i = 0; i < size; i++) {

        printf(" %i ", array[i]);
    }
}
