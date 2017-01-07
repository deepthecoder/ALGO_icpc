//Program to extract digits from a string
//Normally isdigit() in C extracts one digit in a time
//However for example: 213sdvbsjvb33kj7 we would like to extract the digits 213,33,7 at one go
//To perform the same we have strtol() in  stdlib.h of C
//Below is a sample program:

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(void) {
    char str[100000];
    scanf("%s",str);  //or gets(str); depending on the compiler
    char *p = str;
    while (*p)
    {
        if (isdigit(*p)) 
        {
            long val = strtol(p, &p, 10);
            printf("%ld\n", val);
        } 
        else 
        {
            p++;
        }
    }
    return 0;
}
