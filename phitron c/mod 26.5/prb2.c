//In Bubble sort we compares two adjacent elements
//and swaps them until they are in the intended order.
//You have given positive integer N, the size of an array as input.
//Take an array of size N as input and sort this array
//by using Bubble sort.
//You must make a function for swapping numbers by using pass by reference.
#include<stdio.h>

void swapp(int *arr,int N){
 for(int i=0;i<N-1;i++){
           for(int j=0;j<N-i-1;j++){
               if(*(arr+j)>*(arr+j+1)){
                   int temp = *(arr+j);
                   *(arr+j) = *(arr+j+1);
                   *(arr+j+1) = temp;
               }

        }
}
}
int main(){
        int N;
        int arr[100];
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
        }
       swapp(arr,N);
        for(int i=0;i<N;i++){
            printf("%d ",arr[i]);
        }
        return 0;
}
