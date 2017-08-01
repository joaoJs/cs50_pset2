#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    
    if(argc != 2) 
    {
        printf("Wrong number of arguments!\n");
        return (1);
    }
    
    printf("plaintext: ");
    string p = get_string();
    printf("ciphertext: ");
    
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (p[i] >= 65 && p[i] <= 90) 
        {
            int k = ((p[i] + atoi(argv[1])) - 65) % 26;
            printf("%c", k + 65);
        } 
        else if (p[i] >= 97 && p[i] <= 122) 
        {
            int k = ((p[i] + atoi(argv[1])) - 97) % 26;
            printf("%c", k + 97);
        }
        else 
        {
            printf("%c", p[i]);
        }
    }
    
    printf("\n");
    return (0);
    
}
