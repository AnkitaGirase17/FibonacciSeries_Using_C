// fibonacci series using recurition

#include<stdio.h>

// Function declaration
int fibonacci (int n);

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("\n %d ", fibonacci(i)); // function call
    }

    return 0;
}

// Function definition with recursion
int fibonacci(int n) {
    if (n == 0)
    {
    	return 0;  // Base case
	}
       
    else if (n == 1)
    {
        return 1;  // Base case	
	}
       
    else
    {
       return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call	
	}
       
}

