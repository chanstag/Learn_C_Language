#include <stdio.h>

typedef struct LLNode LLNode;

struct LLNode{

    int value;
    LLNode *next;
};

LLNode* insert(LLNode *head, LLNode *new, LLNode *after){

    if(head == NULL  && after != NULL || new == NULL){
        return head;
    }

    if(after == NULL){
        (*new).next = head;
        head = new;
        return head; 
    }

    else{
        (*new).next = (*after).next;
        (*after).next = new;
        return head; 
    }
    return head; 
    
}

int main(){

    printf("1");
    LLNode start;
    LLNode n1;
    LLNode n2;
    
    printf("2");
    start.next = &n1;
    n1.next = &n2;
    n2.next = NULL;
    start.value = 0;
    n1.value = 1;
    n2.value = 2;
    LLNode *head = &start;
    printf("3");

    
    while(head != NULL){
        //printf("%d", start.value);
        printf("%d", (*head).value); 
        head = (*head).next;
    }
    head = &start;

    LLNode to_insert;
    to_insert.value = 4;
    insert(head, &to_insert, &n1);

    printf("\n");
    while(head != NULL){
        printf("%d", (*head).value );
        head = (*head).next;
    }

    return 0;
    }


