//
//  main.c
//  queue
//
//  Created by YeHwan on 2021/03/25.
//

#include <stdio.h>
#define SIZE 10000
#define INF 9999999

int queue[SIZE];
int front = 0;
int rear = 0;

void push(int data){
    if(rear >=SIZE){
        printf("Queue Overflow");
        return;
    }
    queue[rear++] = data;
}
int pop(){
    if(front == rear){
        printf("Queue Underflow");
        return -INF;
    }
    return queue[front++];
}
void show(){
    printf("-----------큐의 앞\n");
    for(int i=front; i<rear; i++){
        printf("%d\n",queue[i]);
    }
    printf("-----------큐의 뒤\n");
}
int main(int argc, const char * argv[]) {
    // insert code here...
    push(7);
    push(5);
    push(4);
    pop();
    push(6);
    pop();
    show();
    
}
