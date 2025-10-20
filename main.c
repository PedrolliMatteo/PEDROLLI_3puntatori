#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value)
{
    int *array = (int *)malloc(sizeof(int) * n);

    if (array == NULL)
    {
        printf("Errore! Array = NULL");
        return array;
    }
    for (int i = 0; i < n; i++)
    {
        array[i] = initial_value;
    }
    return array;
}


int main(void)
{
    int *ris = create_array(5, 13);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", ris[i]);
        if (i < 4)
        {
            printf(" - ");
        }
    }
    printf("\n%p", ris);

    free(ris);
    ris = NULL;
    return 0;
}