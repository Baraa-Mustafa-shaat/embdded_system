#include <stdio.h>

int absolute(int num) {
    if (num < 0) {
        return -num;  
    }
    return num; 
}

int main() {
    int num1 = -10;
    int num2 = 15;

    printf("Absolute value of %d is %d\n", num1, absolute(num1));
    printf("Absolute value of %d is %d\n", num2, absolute(num2));

    return 0;
}
