#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int array[size];
    printf("\nEnter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int *ptr;
    ptr=array;
    for(int i=0;i<size;i++)
    {
        printf("\n Value of %d is %d ",i,*ptr);
        *ptr++;
    }
}