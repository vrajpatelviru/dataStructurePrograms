#include <stdio.h>
int a[10], n;
void disp()
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d ", a[i]);
    }
    printf("\n");
}
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int flag = a[low]; // flag== first array element
        int i = low + 1;    // second element of array
        int j = high;       // last element of array
        int temp;
        do
        {
            while (a[i] <= flag)//continue until find element greater than flag
            {
                i++;
            }
            while (a[j] > flag)//continue untile find element less than flag
            {
                j--;
            }
            if (i < j) //  whene it find inter change i and j
            {
                temp = a[i];   
                a[i] = a[j];
                a[j] = temp;
            }
        } while (i < j);
                        //whene j is greater then i inter change flag with j
        temp = a[low];
        a[low] = a[j];
        a[j] = temp;
        quickSort(a, low, j - 1);  // Recursion Sort the left side
        quickSort(a, j + 1, high); // Recursion Sort the right side
    }
}

void read()
{
    printf("\n enter array element you want::");
    scanf("%5d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n enter element::");
        scanf("%5d", &a[i]);
    }
}
int main()
{
    read();
    printf("Before sort \n");
    disp();
    quickSort(a, 0, n - 1); // call Quick_sort
    printf("After sort \n");
    disp();
    return 0;
}