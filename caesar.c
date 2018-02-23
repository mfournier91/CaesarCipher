#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argv[1] == NULL || argc !=2){
        printf("Usage: ./caesar k\n");
        return 1;
    }
    int k = atoi(argv[1]);
    //k = k % 26;

    printf("plaintext: ");
    string p = get_string();
    printf("ciphertext: ");
    for (int i = 0; i < strlen(p); i++){
        if(isalpha(p[i])){
            if(isupper(p[i])){
                printf("%c",(char)((int)(p[i]+k - 65) % 26 + 65));
            }
            else {
                printf("%c",(char)((int)(p[i]+k - 97) % 26 + 97));
            }
        }
        else {
            printf("%c",p[i]);
        }
    }
    printf("\n");

    return 0;
}