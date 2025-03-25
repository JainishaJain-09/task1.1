Online C compiler to run C program online
#include <stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
        else
            return n*factorial(n-1);
            
        }

int main() {
    int num ;
    scanf("%d",&num);
    if(num<0){
        printf("not define.\n");
    } else{
    printf("Factorial of %d is %d\n", num, factorial(num));
    }
   

    return 0;
}