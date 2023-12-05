#include <stdio.h>
#define MAX_SIZE 50

int main() {
    int n, cond, temp, i, j, k;
    int nums[50];
    int count[10] = {0}; //to keep the frequency of repition of elements in the array

     while (n < MAX_SIZE) {
        printf("Enter element(at the end of all the inputs enter -1 for next element) %d: ", n + 1);
        scanf("%d", &temp);

        // Check for the end of input
        if (temp == -1) {
            break;
        }

        nums[n] = temp;
        n++;  // Increment array size
    }

    cond = n / 3;// the condition n/3
    
    for (j = 0; j < n; j++) {//to scan the whole input array
        temp = nums[j];  //to store the number of the array
        count[temp]++;//to increase the count of frequency of the 'temp' as index number
    }

    for (k = 0; k < 10; k++) {  
        if (count[k] > cond) {// to check if the count of frequency of the number is greater than the condition n/3(1/3 rd of the input array length ) 
            printf("%d ", k);//if the count of frequency of the number is greater than the condition n/3 is true then print the number 
        }
    }

    return 0;
}