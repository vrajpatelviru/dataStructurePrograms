#include<stdio.h>
int n,a[10],x,found,i;
void read(){
    printf("Enter the size of array::");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the element of array::");
        scanf("%d",&a[i]);
    }
}
disp(){
    for(i=0;i<n;i++){
        printf("Array=%d ",a[i]);

    }
    printf("\n");
}
searching(){
    printf("Enter element you want to find::");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            found=1;
            printf("\n element found at index[%d]",i);

        }
        
    }
    if(found==0){
        printf("\nElement not found");
    }
}
void main(){
    read();
    disp();
    searching();
}