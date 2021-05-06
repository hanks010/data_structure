//
//  linked_list_queue.c
//  queue
//
//  Created by YeHwan on 2021/04/09.
//

#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct Node{
    int data;
    struct Node *next;
}Node;
typedef struct Queue{
    Node *front;
    Node *rear;
    int count;  //큐에 포함되어 있는 원소들의 개수를 저장
}Queue;

void push(Queue *queue, int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node -> data = data;
    node ->next = NULL;
    if(queue->count ==0){
        queue -> front = node;
    }else{
        queue->rear = node;
        queue->count++;
    }
}
int pop(Queue *queue){
    if(queue -> count ==0){
        printf("queue underflow");
        return -INF;
    }
    Node *node = queue->front;
    queue->front = node->next;
    int data = node->data;
    free(node);
    queue->count--; //切记
    return data;
}
