	#include<stdio.h>
 
int main() {
   int a, b, add;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &a, &b);
 
   add = sum(a, b);
 
   printf("nAddition of two number is %d: ", add);
   return (0);
} 
 
int sum(int a, int b) {
   int sum1;
   sum1 = a + b;
   return (sum1);
}