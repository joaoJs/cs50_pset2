#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    if(argc != 2) 
    {
        printf("Wrong number of arguments!\n");
        return (1);
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]) == false)
        {
            printf("Wrong keyword format!\n");
            return (1);
        }
    }
    
    printf("plaintext: ");
    string p = get_string();
    printf("ciphertext: ");
    int x = 0;
    int c = 0;
    
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        
      if(p[1] != ' ') { 
          
        int j = c % strlen(argv[1]);
        
        if (argv[1][j] >= 97 && argv[1][j] <= 122)
        {
            x = argv[1][j] - 97;
        }
        else if (argv[1][j] >= 65 && argv[1][j] <= 90)
        {
            x = argv[1][j] - 65;
        }
        
        if (p[i] >= 65 && p[i] <= 90) 
        {
            int k = ((p[i] + x - 65) % 26);
            c++;
            printf("%c", k + 65);
        } 
        else if (p[i] >= 97 && p[i] <= 122) 
        {
            int k = ((p[i] + x - 97) % 26);
            c++;
            printf("%c", k + 97);
        }
        else 
        {
            printf("%c", p[i]);
        }
      }
      else 
      {
          printf(" ");
      }
    }
    
    printf("\n");
    return (0);
    
}