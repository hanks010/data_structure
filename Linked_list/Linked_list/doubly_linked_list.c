//
//  doubly_linked_list.c
//  Linked_list
//
//  Created by YeHwan on 2021/04/03.
//

#include <stdio.h>
#include <stdlib.h>

    typedef struct Node{
        int data;
        struct Node *prev;
        struct Node *next;
    }Node;
    Node *head, *tail;
void insert(int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    Node *cur;
    cur = head->next;
    while(cur ->data <data && cur !=tail)
        cur = cur->next;
    Node* prev = cur->prev; //삽입할 노드의 바로 앞 위치를 프리뷰로 잡음
    prev->next =node;
    node->prev = prev;
    cur->prev = node;
    node->next = cur;
}
void removeFront(){
    Node * node = head->next;
    head->next = node->next;
    Node* next = node->next;
    next->prev = head;
    free(node);
}
void show(){
    Node* cur = head->next;
    while(cur !=tail){
        printf("%d ",cur->data);
        cur = cur->next;
    }
}
int main(void){
    head = (Node*)malloc(sizeof(Node));
    tail = (Node*)malloc(sizeof(Node));
    head->next = tail;
    head->prev = head;
    tail->next = tail;
    tail->prev = head;
    insert(2);
    insert(1);
    insert(3);
    insert(9);
    insert(7);
    removeFront();
    show();
}
