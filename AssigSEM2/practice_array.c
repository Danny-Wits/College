#include <stdio.h>
int size_of_array;
void traverse(int *);
void insert(int *, int, int);
void delete(int *, int);
int main()
{
    static int item = 6, index = 3;
    int ar[] = {1, 2, 3, 4, 5};
    size_of_array = sizeof(ar) / sizeof(ar[1]);
    traverse(ar);
    insert(ar, item, index);
    traverse(ar);
    delete (ar, index);
    traverse(ar);
}

void traverse(int ar[])
{
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d,", ar[i]);
    }
}
void insert(int ar[], int item, int index)
{
    int i;
    for (i = size_of_array; i >= index; i--)
    {
        ar[i + 1] = ar[i];
    }
    printf("\n[INSERTION COMPLETE]\n");
    ar[index] = item;
    size_of_array++;
}
void delete(int ar[], int index)
{
    int i;
    for (i = index; i < size_of_array; i++)
    {
        ar[i] = ar[i + 1];
    }
    printf("\n[Deletion COMPLETE]\n");
    size_of_array--;
}