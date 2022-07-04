/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", &arr);
    for(int i = 0; i < n; i++){
        sum += arr[i] - '0';
    }
    printf("%d", sum);
}
