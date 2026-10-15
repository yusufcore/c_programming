#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head=NULL;

void createlist(int num){
    struct Node* temp = NULL;
    struct Node* p = NULL;
    int i;
    for(i = 1; i <= num; i++){
        temp = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter Node data: ");
        scanf("%d", &(temp->data));
        if(head == NULL){
            head = temp;
            temp->next = head;
        }
        else{
            p = head;
            while(p->next != head)p=p->next;
            p->next = temp;
            p=p->next;
            p->next = head;
        }
    }
}

void traverse(struct Node* p){
    if(p!=NULL){
        do{
            printf("%d\t", p->data);
            p=p->next;
        }while(p!=head);
        printf("\n");
    }else{
        printf("List is empty\n");
    }
}

void insert(int data, int pos){
    struct Node* temp;
    int i=1;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=temp;
    if(head==NULL){
        head=temp;
        temp->next=head;
    }else if(pos==1){
        struct Node* t = head;
        while(t->next!=head){
            t=t->next;
        }
        temp->next = head;
        t->next = temp;
        head = temp;
    }
    else{
        struct Node* t = head;
        while((t->next!=head)&&(i<pos-1)){
            t=t->next;
            i++;
        }
        temp->next = t->next;
        t->next=temp;
    }
}
int main(int argc, char** argv){
    int option;
    int data, pos;
    int num;
    while(1){
        printf("=== Circular Singly Linkedlist ===\n");
        printf("1) To create singly linked list\n");
        printf("2) To traverse singly linked list\n");
        printf("3) Insert new node at the beginning\n");
        printf("10) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        switch(option){
            case 1:
                  printf("Enter the number of nodes: ");
                  scanf("%d", &num);
                  createlist(num);
                  break;
            case 2:
                   traverse(head);
                   break;
            case 3: 
                  printf("Enter the data of new node:");
                  scanf("%d", &data);
                  printf("Enter the position:");
                  scanf("%d", &pos);
                  insert(data, pos);
                  break;
            case 10:
                    exit(0);
            default:
                    printf("Incorrect option\n");
                    break;
        }
    }
    return 0;
}
