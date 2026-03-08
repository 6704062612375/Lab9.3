#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int sumDigitChars(char str[]);

int main() {
    char input[MAX];
    int sum;
    
    printf("Enter input: ");
    fgets(input, MAX, stdin);
    input[strcspn(input, "\n")] = 0;
    
    sum = sumDigitChars(input);
    
    printf("Sum of digit char: %d\n", sum);
    
    return 0;
}

int sumDigitChars(char str[]) {
    int sum = 0;
    int len = strlen(str);
    
    for(int i = 0; i < len; i++) {
        if(isdigit(str[i])) {
            sum += str[i] - '0';
        }
    }
    
    return sum;
}
