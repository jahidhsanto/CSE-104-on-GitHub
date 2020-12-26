#include <stdio.h>
int main()
{
    int t, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &d);
        int arr[d], flag = 0;

        printf("Denominations:");
        for (int i = 0; i < d; i++)
        {
            scanf("%d", &arr[i]);
            printf(" %d", arr[i]);
        }
        printf("\n");

        for (int i = 1; i < d; i++)
        {
            int tmp;
            tmp = arr[i - 1] * 2;
            if (arr[i] < tmp)
                flag = 1;
        }

        if (flag == 1)
            printf("Bad coin denominations!\n");
        else
            printf("Good coin denominations!\n");
        if (t > 0)
            printf("\n");
    }
    return 0;
}