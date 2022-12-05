//You have given positive integer N, the size of an array as input.
// Take an array of size N as input. Now your task to
//print this array. Implement this by using pointers.
#include <stdio.h>
int main() {
    int N;
    int data[100];
    scanf("%d",&N);


    for (int i = 0; i < N; ++i)
        scanf("%d", data + i);


    for (int i = 0; i < N; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
