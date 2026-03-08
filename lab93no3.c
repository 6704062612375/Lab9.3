#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64], int size);

int main() {
    char login[5][64] = {"user1", "user2", "user3", "user4", "user5"};
    char password[5][64] = {"pass1", "pass2", "pass3", "pass4", "pass5"};
    char inputLogin[64], inputPass[64];
    int result;
    
    printf("Enter login : ");
    gets(inputLogin);
    printf("Enter password : ");
    gets(inputPass);
    
    result = checkLogin(inputLogin, inputPass, login, password, 5);
    
    if(result == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
    
    return 0;
}

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64], int size) {
    for(int i = 0; i < size; i++) {
        if(strcmp(login, logindb[i]) == 0 && strcmp(passwd, passdb[i]) == 0) {
            return 1;
        }
    }
    return 0;
}