#include <stdio.h>
int size;
void traverse(int *);
void insertion(int *, int, int);
void deletion(int *, int);
int *sort(int[]);
void search(int *, int);

int main()
{
    // declaration

    int ar[] = {1, 2, 3, 4, 6, 7};

    int item = 5;
    static int index = 4;
    size = sizeof(ar) / sizeof(ar[0]);
    // traverse/visit/access
    traverse(ar);
    // insertion
    insertion(ar, item, index);
    traverse(ar);
    // deletion
    deletion(ar, index);
    traverse(ar);
    // sort
    traverse(sort(ar));
    // search
    item = 4; // item to search
    search(ar, item);

    return 0;
}

// Function to traverse / visit/ access
void traverse(int ar[])
{
    printf("The arrary is ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", ar[i]);
    }
    printf("\b.\n");
}
// Function for Insertion
void insertion(int ar[], int item, int index)
{
    for (int i = size; i >= index; i--)
    {
        ar[i + 1] = ar[i];
    }
    size++;
    ar[index] = item;

    printf("\n1:- Insertion completed\n");
}

// Function for deletion
void deletion(int ar[], int index)
{
    for (int i = index; i < size; i++)
    {

        ar[i] = ar[i + 1];
    }
    size--;

    printf("\n2:- Deletion completed\n");
}

// Function for sorting in desending order
int *sort(int ar[])
{
    int i;
    short flag = 1;
    while (flag == 1)
    {
        flag = 0;
        for (i = 0; i < size - 1; i++)
        {
            if (ar[i] < ar[i + 1])
            {
                int a = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = a;
                flag = 1;
            }
        }
    }
    printf("\n3:-Sorting completed\n");
    return ar;
}
// A  linear search function

void search(int ar[], int item)
{
    short flag = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (ar[i] == item)
        {
            flag = i;
            break;
        }
    }
    printf("\n4:-Search completed\n");
    if (flag != 0)
    {
        printf("The element was found at an index of %d\n", flag);
    }
    else
    {
        printf("The item was not found\n");
    }
}