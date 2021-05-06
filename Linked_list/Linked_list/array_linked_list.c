//
//  array_linked_list.c
//  Linked_list
//
//  Created by YeHwan on 2021/04/04.
//

#include <string.h>
#include <stdio.h>
#define INF 10000
int arr[INF];
int count = 0;

void addBack(int data){
    arr[count] = data;
    count++;
}
void addFront(int data){
    for(int i =count; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = data;
    count++;
}
void show(){
    for(int i=0; i<count; i++){
        printf("%d ",arr[i]);
    }
}
void del(int index){
    for(int i=index;i<count-1;i++){
        arr[i]= arr[i+1];
    }
    count--;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    addBack(5);
    addBack(8);
    addBack(7);
    addFront(3);
    addFront(4);
    del(2);
    show();
    
        return 0;
}

