// whether the given string is palindrome or not.
#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    int i,len;
    int flag=0;
    printf("Enter a string: ");
    scanf("%s",string);
    len=strlen(string);
    for(i=0; i<len; i++)
    {
        if(string[i]!=string[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag){
        printf("%s is not polindrome",string); }
    else{
        printf("%s is polindrome",string);  }
    return 0;
}

//output:
//Enter a string: malayalam                                                                                                                       
//malayalam is polindrome