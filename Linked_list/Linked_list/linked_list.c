//
//  main.c
//  Linked_list
//
//  Created by YeHwan on 2021/03/25.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *head;
void insert(Node *root,int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = root->next;
    root->next = node;
}
void delete(Node *root){
    //free(root->next);
    //root ->next = root->next->next;
    Node *front = root->next;
    root->next = front ->next;
    free(front);
}
void freeAll(Node*root){
    Node *cur= head->next;
    while(cur!=NULL){
        free(cur);
        cur = cur->next;
    }
}
void showAll(Node *root){
    Node *cur = head ->next;
    while(cur != NULL){
        printf("%d ",cur->data);
        cur = cur ->next;
    }
}
int main(void){
    head = (Node*)malloc(sizeof(Node));
    head -> next = NULL; //중요, 연결리스트의 마지막은 널이여야 하므로
    insert(head,2);
    insert(head,1);
    insert(head,7);
    insert(head,9);
    insert(head,8 );
    delete(head);
    showAll(head);
    freeAll(head);
}
