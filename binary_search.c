#include <stdio.h>
int n = 0, a[10], x, mid, low, high, found, i;
void read()
{
    printf("enter array element you want::");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter element of array::");
        scanf("%5d", &a[i]);
    }
}
void disp()
{
    for (i = 0; i < n; i++)
    {
        printf(" array %5d=", a[i]);
    }
    printf("\n");
}
void searching()
{
    printf("enter element you want to search::");
    scanf("%d", &x);
    low = 0;
    high = n;
    found = 0;

    while (low <= high)
    {
        mid = low + high / 2;
        if (a[mid] == x)
        {
            found = 1;
            printf("element found at index[%d]", mid);
            
        }
        if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(found==0) printf("element not fount");
}
void main()
{
    read();
    disp();
    searching();
}
