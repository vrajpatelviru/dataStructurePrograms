#include<stdio.h>
int n,a[10],front=-1,rear=-1,ch,x;
void push(){
    
    if ((rear+1)%n==front){
        printf("Queue is over flow");
    }
    else{
        printf("enter element in queue::");
        scanf("%d",&x);

        if(front==-1 && rear==-1) front=rear=0;
        else{
            rear=(rear+1)%n;
        }
        a[rear]=x;
    }   
    
    
}

void pop(){
    if (front== -1 && rear== -1){
        printf("Queue is under flow");
    } 
    else{
        printf("Removed element: %d\n", a[front]);

        if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%n;
        }
    }
}
void display(){
    if(front== -1 && rear== -1){
        printf("queue is empty:");
    }
    else{
        int i=front;
        printf("Queue is::");
        while(i!=rear){
            printf("%d",a[i]);
            i=(i+1)%n;
        }
        printf("%d\n",a[rear]);
    }
}
void main(){
    n=3;
    do{
    printf("\n1.push \n2.pop \n3.display\nenter your choice::");
    scanf("%d",&ch);

    if(ch==1)push();
    if(ch==2)pop();
    if(ch==3)display();
    }while(ch!=0);

}