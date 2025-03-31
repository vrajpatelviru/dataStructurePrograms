#include<stdio.h>
int a[10],top,n,x,i,ch;
void menu(){
    
    printf("\n1. Push\n2. Pop\n3. Display\n4. peep\n5. Change\n6. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    
};


void push(){
    if(top>=n){
        printf("Stack over flow");
    }
    else{
        top++;
        printf("enter thr element in stack::");
        scanf("%d",&x);
        a[top]=x;
    }
};
void pop(){
    if(top==0){
        printf("Stack is underflow::");
    }
    else{
        top--;
        printf("deleted element is %d",a[top+1]);
    }
};
void peep(){
    printf("enter the position::");
    scanf("%d",&i);

    if(top-i+1<=0){
        printf("Stack is under flow on peep:");

    }else{
        printf("peep element is %d",a[top-i+1]);
    }
};
void change(){
    printf("enter the position::");
    scanf("%d",&i);
    if(top-i+1<=0){
        printf("Stack is under flow on peep:");

    }else{
        printf("enter the new element::");
        scanf("%d",&x);
        a[top-i+1]=x;
    }
};
void display(){
    if(top==0){
        printf("stack is empty::");

    }else{
        printf("\n stack arry is::");
        for(i=top;i>0;i--){
            printf("\n\t%d",a[i]);
        }
    }
};
void main(){
    n=5;
do{
    menu();
    if (ch == 1) push();
    if (ch == 2) pop();
    if (ch == 3) display();
    if (ch == 4) peep();
    if (ch == 5) change();
}while(ch!=0);
}