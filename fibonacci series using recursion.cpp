#include <stdio.h>


int fibonacci(int n) {

    if (n == 1 || n == 2)
        return 1; 
        
    return fibonacci(n - 1) + fibonacci(n - 2);
	
	printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series to be printed: ");
    scanf("%d", &n);

    

    return 0;
}

