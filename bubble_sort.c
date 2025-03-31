#include<stdio.h>
#include<conio.h>
 int main(){
    
    int a[]={2,22,3,55,6,88,4,1};
    int n=8;

    printf("befor shorted array \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("after shorted array::\n");
    int temp;
    for (int i = 0; i < n-1; i++) // for number of pass
    {
        for (int j = 0; j < n-1-i; j++) //for comparison in each pass
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
    getch();
 }