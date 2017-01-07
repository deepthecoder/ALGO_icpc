//Program to extract digits from a string
//Normally isdigit() in C extracts one digit in a time
//However for example: 213sdvbsjvb33kj7 we would like to extract the digits 213,33,7 at one go
//To perform the same we have strtol() in  stdlib.h of C
//However in the same example the ouput would have been 2,1,3,3,3,7 which is not the desired and we have to extend the logic a bit more
//to check for the ocuurences of digits.
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
