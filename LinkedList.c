#include<stdio.h>
typedef struct LLNode LLNode;

struct LLNode{
    int value;
    LLNode *next;
};

int main(){

    
    LLNode start;
    LLNode n1;
    LLNode n2;

    start.next = &n1;
    n1.next = &n2;
    LLNode *head = &start;

    start.value = 0;
    n1.value = 1;
    n2.value = 2;
    while(head != NULL){
        printf("please provide value of current node %d", head.value); 
        head = head.next;
    }
    return 0;
}



LLNode* insert(LLNode *head, LLNode *new, LLNode *after){

    if(head == NULL  && after != NULL || new = NULL){
        return head;
    }

    if(after == null){
        new.next = *head;
        head = new;
        return head; 
    }

    else{
        new.next = after.next;
        after.next = new;
        return head; 
    }
    return head; 
}