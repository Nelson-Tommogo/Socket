#include<stdio.h>

int add(int *, int *);
int main(){
    int a, b, sum;
    printf("\nEnter the two numbers : ");
    scanf("%d %d", &a, &b);
    sum=add(&a,&b);
    printf("\nEnter the two numbers : %d",a,b, sum);

    return 0;

}
int add(int* a,int*b){
    return *a + *b;
}
