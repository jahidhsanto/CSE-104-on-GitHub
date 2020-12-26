#include <stdio.h>
#include <string.h>
void go_for_print(int n, int i)
{
    if (n == 0)
    {
        printf("Case %d: Yes\n", i + 1);
    }
    else
    {
        printf("Case %d: No\n", i + 1);
    }
}

int main()
{
    int t, j;
    char Str[100000];
    long long int m, n;
    int i;
    //Input test cases number
    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", Str);
        scanf("%llu", &m);
        n = 0;

        //length of str[100000]
        for (j = 0; Str[j] != '\0'; ++j)
            ;
        int ln = j;

        for (int j = 0; j < ln; j++)
        {
            if (Str[j] == '-')
                continue;
            n = ((n * 10) + (Str[j] - '0')) % m;
        }

        //Go for print

        go_for_print(n, i);
        ++i;
    }
    return 0;
}