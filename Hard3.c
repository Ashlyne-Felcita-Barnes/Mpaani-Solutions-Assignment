#include <stdio.h>

// Function to count the number of digit 1 in the range [0, n]
int countDigOne(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {//for non negative integers(i.e i>1) to the integer n
        int num = i;//Temporarily store the number
        while (num > 0) {//if non negative
            if (num % 10 == 1) {//to find the digit from units place( rightmost integer), if it is '1' increment the count
                count++;
            }
            num /= 10;//to consider the remaining place digits
        }
    }
    return count;
}

int main() {
    int n;// Input the integer
    printf("Enter an integer: ");
    scanf("%d", &n); // Count the number of digit 1 and print the result
    int result = countDigOne(n);// to receive the count
    printf("Total number of digit 1 in the range [0, %d]: %d\n", n, result);

    return 0;
}