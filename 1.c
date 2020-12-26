#include <stdio.h>
int main()
{
    long long int N, X;

    scanf("%lld %lld", &N, &X);

    printf("%lld ", 3 * (N + (2 * N - X)));
    return 0;
}