#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, j;
    char *num = (char*)malloc (1000* sizeof(char));
    int arr[10] ={  };  
    char s[10] = "0123456789";
    fgets(num, 1000, stdin);
    int len = strlen(num);
    for (i = 0; i < 10; i++)
    for (j = 0; j < len; j++)
    if (num[j] == s[i] )
    arr[i]++;
    for (i = 0; i < 10; i++)
    printf("%d ", arr[i]);
    putchar('\n');
    free(num);
    return 0;
}
