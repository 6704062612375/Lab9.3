#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    char str1[100], str2[100], str_rem[100];
    char deletedChars[100] = {0};
    int deletedCount[100] = {0};
    int notFoundChars[100] = {0};
    int notFoundCount = 0;
    int i = 0, j = 0, k = 0, m = 0;
    int found;
    
    printf ("Enter the First string:\n");
    fflush (stdin);
    gets (str1);
    
    printf ("Enter the Second string:\n");
    gets (str2);
    
    printf("\nDeletion Process\n");
    
    for (i = 0; str1[i] != '\0'; i++)
    {
        found = 0;
        printf("Checking character '%c' from first string:\n", str1[i]);
        
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                found = 1;
                int alreadyRecorded = 0;
                for(int x = 0; x < m; x++) {
                    if(deletedChars[x] == str1[i]) {
                        deletedCount[x]++;
                        alreadyRecorded = 1;
                        break;
                    }
                }
                if(!alreadyRecorded) {
                    deletedChars[m] = str1[i];
                    deletedCount[m] = 1;
                    m++;
                }
                printf("  Found and will remove '%c'\n", str1[i]);
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k++;
            }
        }
        
        if(!found) {
            printf("  Character '%c' not found in second string\n", str1[i]);
            notFoundChars[notFoundCount++] = str1[i];
        }
        
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        printf("  Current second string: \"%s\"\n", str2);
        k = 0;
    }
    
    printf("Deletion Summary\n");
    printf("Characters removed from second string:\n");
    for(i = 0; i < m; i++) {
        printf("  '%c' : %d time(s)\n", deletedChars[i], deletedCount[i]);
    }
    
    if(notFoundCount > 0) {
        printf("\nCharacters from first string not found in second string:\n");
        for(i = 0; i < notFoundCount; i++) {
            printf("  '%c'\n", notFoundChars[i]);
        }
    } else {
        printf("\nAll characters from first string were found in second string.\n");
    }
    
    printf ("\nFinal result: %s\n", str_rem);
    
    return 0;

}

