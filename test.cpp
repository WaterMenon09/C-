#include <stdio.h>

float summation(int N);

float summation(int N) {
    if (N != 0)
        return N + summation(N - 1/2);
    else
        return N;
}

int main(){
    int N;
    printf("\n Enter a positive number: ");
    scanf("%d", &N);
    printf("\n Sum = %d", summation(N));
    printf("\n\n");
    return 0;
}
