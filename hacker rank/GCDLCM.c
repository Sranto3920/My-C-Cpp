#include<stdio.h>

long long gcd(long long a, long long b) {
    while(b!=0) {
        long long temp=b;
        b=a%b;
        a=temp;
}
    return a;
}
long long lcm(long long a, long long b) {
    return (a*b)/gcd(a, b);
}
int main() {
    int T;
    scanf("%d",&T);

     while (T--) {
        long long G, L;
        scanf("%lld %lld",&G,&L);
        if (L%G!=0) {
            printf("-1\n");
        } else {
            long long a= G;
            long long b= L;
        if (lcm(a,b)== L && gcd(a,b)==G) {
                printf("%lld %lld\n", a, b);
            } 
            else {
                printf("-1\n");
        }
        }
}
    return 0;
}

#include<stdio.h>

int main(){



    return 0 ;
}