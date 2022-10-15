#include<stdio.h>
main(){
    int i1,i2;
    printf("Enter the first number here:-  ");
    scanf("%d",&i1);
    printf("Enter the second number here:-  ");
    scanf("%d",&i2);
    i1=(i1+i2)*(i1-i2);
    printf("The required result id  %d\n",i1);
    main();
    
}