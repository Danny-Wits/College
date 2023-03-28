#include <stdio.h>

// queue declaration
#define queue_size 10
int queue[queue_size];
int front = 0;
int rare = 0;
// function prototyping
void display();
void dequeue();
void enqueue(int);

int main()
{
    char c;
    enqueue(10);
    enqueue(20);
    enqueue(40);
    display();
    printf("\nPress Enter to dequeue-");
    scanf("%c", &c);
    dequeue();
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
void dequeue()
{
    if (rare == 0)
    {
        printf("[Queue is Empty]\n");
    }
    else
    {
        printf("[Dequeueing Successful]\n");
        for (int i = front; i < rare; i++)
        {
            queue[i] = queue[i + 1];
        }
        rare--;
    }
}