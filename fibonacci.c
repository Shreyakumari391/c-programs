#include <stdio.h>
int main() {
    int n, t1, t2;
    printf("Fibonacci series up to how many terms? ");
    scanf("%d", &n);
    t1=0;
    t2=1;
    printf("\nFibonacci Series: \n");
    for (int i=1; i<=n; i++){
        printf("%d\n", t1);
        int nt = t1 + t2; //next term
        t1 = t2;
        t2 = nt;
    }
    return 0;
}