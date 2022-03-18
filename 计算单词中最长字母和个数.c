#include<stdio.h>
int main()
{
    int excellented = 0, passed = 0;
    int i = 0, n;
    int a[10000];
    scanf("%d", &n);
    for (i; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= 60)
        {
            passed++;
        }
        if (a[i] >= 85)
        {
            excellented++;
        }
    }
    printf("%.0f%%\n", (passed * 100.0) / n);
    printf("%.0f%%", (excellented * 100.0) / n);
}
