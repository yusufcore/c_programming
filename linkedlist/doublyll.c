#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
}*Head=NULL;

void create(int num){
    struct Node* temp;
    int i;
    for(i=1; i<=num; i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter Node Data: ");
        scanf("%d", &(temp->data));
        temp->prev=NULL;
        temp->next=NULL;
        if(Head==NULL){
            Head=temp;
        }else{
            struct Node* p=Head;
            while(p->next!=NULL)p=p->next;
            temp->prev=p;
            p->next=temp;
        }
    }
}

void traverse(){
    struct Node* p=Head;
    if(p==NULL){
        printf("Empty list\n");
        return;
    }
    while(p->next!=NULL){
        printf("%d\t", p->data);
        p=p->next;
    }
    printf("%d\n", p->data);
    while(p->prev!=NULL){
        printf("%d\t", p->data);
        p=p->prev;
    }
    printf("%d\n", p->data);
}

void insert(int data, int pos){
    struct Node* temp;
    struct Node* p=Head;
    int i=1;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    if(Head==NULL){
        Head=temp;
    }else if(pos==1){
        Head=temp;
        temp->next=p;
        p->prev=temp;
    }else{
        while((p->next!=NULL)&&(i<pos-1)){
            p=p->next;
            i++;
        }
        struct Node* q=p->next;
        temp->prev=p;
        p->next=temp;
        if(q!=NULL){
        temp->next=q;
        q->prev=temp;
        }

}
}

int main(int argc, char** argv){
    int option;
    int data, pos;
    int num;
    while(1){
        printf("=== Doubly Linkedlist ===\n");
        printf("1) To create doubly linked list\n");
        printf("2) To traverse doubly linked list\n");
        printf("3) Insert new node at the beginning\n");
        printf("10) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        switch(option){
            case 1:
                  printf("Enter the number of nodes: ");
                  scanf("%d", &num);
                  create(num);
                  break;
            case 2:
                   traverse();
                   break;
            case 3:
                   printf("Enter the new node data: ");
                   scanf("%d", &data);
                   printf("Enter the position: ");
                   scanf("%d", &pos);
                   insert(data,pos);
                   break;
            case 10:
                    exit(0);
            default: 
                   printf("Invalid option\n");
                   break;
        }
    }
    return 0;
}