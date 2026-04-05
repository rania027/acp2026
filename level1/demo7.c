// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
void inputStrings(char str1[], char str2[]);
int compareStrings(char str1[], char str2[]);
void output(int result);

int main() {
    // Write C code here
    char str1[100], str2[100];
    inputStrings(str1, str2);
   
    int result = compareStrings(str1, str2);
    output(result);

    return 0;
}
void inputStrings(char str1[], char str2[]){
   
    printf("Enter the strings:");
    scanf("%s %s", str1, str2);
}
int compareStrings(char str1[], char str2[]){
    int n = strcmp(str1, str2);
    if (n==0){
        return 0;
    }else if(n>0){
        return 1;
    }else{
        return -1;
    }
}
void output(int result){
    if (result == 0){
        printf("str1 and str2 are equal");
    }else if (result == 1){
        printf("str1 is greater than str2");
    }else{
        printf("str2 is greater than str1");
    }
}
