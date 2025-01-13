//compare, concatenate and find string length.
#include <stdio.h>
#include <string.h>

int stringCompare(char s1[], char s2[])
{
    return strcmp(s1,s2);
}

void stringConcatenate(char s1[], char s2[])
{
    //strcpy(res,s1);
    strcat(s1,s2);
}

int stringLen(char s[])
{
    return strlen(s);
}

int main()
{
    char string[20] = "good";
    char string1[20] = "evening";

    printf("the first string is %s \n",string);
    printf("the second string is %s \n",string1);

    //results of compare
    int results;
    results = stringCompare(string, string1);
    printf("The strings were compared. \n");
    if (results==0)
    {
        printf("And they were found to be equal.");
    }
    else
    {
        printf("And they were found to be inequal. \n");
    }

    //concatenation
    stringConcatenate(string,string1);
    printf("the concatenated strings are: %s \n",string);

    //string length
    int len1 = stringLen(string);
    int len2 = stringLen(string1);
    printf("the length of first string is %d \n",len1);
    printf("the length of second string is %d",len2);
    return 0;
}
