#include <stdio.h>

int fibonacci(int num); 

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ",fibonacci(num));
    return num;
}

int fibonacci(int num) {
    int a = 0, b = 1, c, i;

    for(i = 0; i < num; i++) {
        if(i == 0) {
            printf("%d ", a);
        } else if(i == 1) {
            printf("%d ", b);
        } else {
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }
    }
    printf("\n");
}

