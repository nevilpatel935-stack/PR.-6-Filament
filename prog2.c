#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter any string: ");
    scanf("%s", str);
    for(i=0; str[i] != '\0';i++)
    {
        freq[(int)str[i]]++;
    }

    printf("\nFrequency of each letter:\n");

    for(i=0; str[i] != '\0'; i++)
    {
        if(freq[(int)str[i]] != 0)
        {
            printf("%c => %d\n", str[i] ,freq[(int)str[i]]);
            freq[(int)str[i]] = 0; 
        }
    }

    return 0;
}
