#include <stdio.h>

// queue declaration
#define queue_size 10
int queue[queue_size];
int front = 0;
int rare = 0;
// function prototyping
void display();
void enqueue(int);

int main()
{
    int item;
    display();
    printf("Enter the element you want to enqueue(insert): -");
    scanf("%d", &item);
    enqueue(item);
    display();
}
void display()
{
    if (front == rare)
    {
        printf("[Queue is Empty]\n");
    }
    else
    {
        printf("The queue is :- \n");
        for (int i = front; i < rare; i++)
        {
            printf("%d<-", queue[i]);
        }
    }
}
void enqueue(int item)
{
    if (rare == queue_size)
    {
        printf("[overflow]\n");
    }
    else
    {
        printf("[Enqueueing Successful]\n");
        queue[rare] = item;
        rare++;
    }
}