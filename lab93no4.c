#include <stdio.h>

#define MAX 50

void countVowel(char t[], int vowelCount[]);

int main() {
    char text[MAX];
    int vowelCount[5] = {0, 0, 0, 0, 0};  // ?????? a, e, i, o, u ????????
    int totalVowels = 0;
    
    printf("Enter text : ");
    scanf("%s", text);
    
    countVowel(text, vowelCount);
    
    // ????????????????????
    for(int i = 0; i < 5; i++) {
        totalVowels += vowelCount[i];
    }
    
    printf("Text : [%s] has %d vowels\n", text, totalVowels);
    printf("Vowel details:\n");
    printf("  a/A : %d\n", vowelCount[0]);
    printf("  e/E : %d\n", vowelCount[1]);
    printf("  i/I : %d\n", vowelCount[2]);
    printf("  o/O : %d\n", vowelCount[3]);
    printf("  u/U : %d\n", vowelCount[4]);
    
    return 0;
}

void countVowel(char t[], int vowelCount[]) {
    int i = 0;
    
    while (i < MAX && t[i] != '\0') {
        switch(t[i]) {
            case 'A':
            case 'a':
                vowelCount[0]++;
                break;
            case 'E':
            case 'e':
                vowelCount[1]++;
                break;
            case 'I':
            case 'i':
                vowelCount[2]++;
                break;
            case 'O':
            case 'o':
                vowelCount[3]++;
                break;
            case 'U':
            case 'u':
                vowelCount[4]++;
                break;
        }
        i++;
    }
}