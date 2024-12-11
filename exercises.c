//prog 1: with the prime numbers. 
//For all of these codes i wrote them firstly in python and then i converted it to C language 

#include <stdio.h>

int main() {
    int num;

    printf("please enter the number you want to check\n");
    scanf("%d", &num);

    if (num > 1) {
        int is_prime = 1; 
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("the number is not prime\n");
                printf("%d times %d is %d\n", i, num / i, num);
                is_prime = 0; 
                break;
            }
        }
        if (is_prime) {
            printf("the number is prime\n");
        }
    } else if (num == 1) {
        printf("the number is not prime\n");
    } else {
        printf("enter a positive value\n");
    }

    return 0;
}     

//Prog2: to find the largest number

#include <stdio.h>

int main() {
    int n1, n2, n3, largest;

    printf("Enter number 1 : ");
    scanf("%d", &n1);

    printf("Enter number 2 : ");
    scanf("%d", &n2);

    printf("Enter number 3 : ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        largest = n1;
    }
    else if (n2 > n1 && n2 > n3) {
        largest = n2;
    }
    else {
        largest = n3;
    }
    
    printf("Largest among %d %d and %d is %d", n1, n2, n3, largest);

    return 0;
}

//Prog 3 c program reclusive function, calculate the factorial 8

#include <stdio.h>

int factorial(int x) {
    if (x == 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {
    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    int result = factorial(number);
    
    printf("Factorial of entered number %d is %d\n", number, result);
    
    return 0;
}

//Prog 4 to find the sum of first 10 natural numbers
 #include <stdio.h>

int main() {
    int number = 10;
    int total = 0;
    
    for (int index = 1; index <= number; index++) {
        total += index;
    }
    
    printf("sum of first 10 Natural Numbers is : %d\n", total);
    
    return 0;
}


// prog 5 to find the square of any number using the function 

#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Square of %d is: %d\n", number, square(number));
    return 0;
}


