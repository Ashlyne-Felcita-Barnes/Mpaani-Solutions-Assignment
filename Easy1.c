#include <stdio.h>
#include <string.h>

int main() {
    char s[100];// the input string

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(s), stdin);

    int len = strlen(s);//to get the count of the last character
    int count = 0;

    
    for (int i = len - 1; i >= 0; i--) { //check from last character
        if (s[i] == ' ' && count == 0) {//to skip trailling spaces at the end of the string. There will be no characters at the beginning so count is 0
            continue; 
        } else if (s[i] == ' ') { //to stop the count of letters of the word as it is one word before space
            break;   
        } else {// to count the number of letters of the last word
            count++;  
        }
    }

    printf("Length of the last word: %d\n", count-1);

    return 0;
}
