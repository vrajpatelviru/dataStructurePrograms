/*
            In simple queue can not add element after queue if full
            Even if you delete any element form queue
            In simple queue element add from back and delete from front
*/


#include<stdio.h>
int n,ch,x,a[10],front=0,rear=0,i;

void push(){ //insert
    if(rear==n){
        printf("Queue is full");
    }
    else{
        rear++;
        printf("\nenter the element::");
        scanf("%d",&x);
        a[rear]=x;
        if(front==0) front=1;
    }
}

void pop(){ //delete
    if(front==0){
        printf("Queue is under flow");
    }
    else{
        printf("poped element is : %d",a[front]);
        front++;
    }
}

void display(){
    if(front==n){
        printf("Queue is empty:");

    }else{
        printf("Queue elements are:");
        for ( i = front; i <= rear; i++)
        {
            printf("\n\t%d",a[i]);
        }
        
    }
}

void main(){
    n=3;
    do{
    printf("\n1.push\n2.pop\n3.display\n enter your choice::");
    scanf("%d",&ch);
    if(ch==1)push();
    if(ch==2)pop();
    if(ch==3)display();
    }while(ch!=0);
}