/*Enter 2 positive integers A, B, and output the largest common divisor of A and B*/
#include <stdio.h>

//recursion
int gcd1(int a,int b){
    if (b==0)  return a;
    else return gcd1(b,a%b);
}

//non-recursion
int gcd2(int a,int b){
    int t;
    while (b!=0) {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}

int main(){
    int a,b;
    //scanf("%d%d",&a,&b);
    while (scanf("%d%d",&a,&b)) {
        printf("%d",gcd2(a,b));
    }
}
