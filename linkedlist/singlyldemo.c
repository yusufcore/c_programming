#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head = NULL;

void createlist(int num){
    struct Node* temp = NULL;
    struct Node* first = NULL;
    int i;
    for(i=1;i<=num;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->next = NULL;
        printf("Enter Node data: ");
        scanf("%d", &(temp->data));
        if(head==NULL){
            head=temp;
            first=temp;
        }else{
            first->next=temp; 
            first=first->next;  
        }
    }
}
void traverse(){
    struct Node* temp = head;
    while (temp!=NULL)
    {
        printf("%d\t", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int option;
    int num;
    while(1){
        printf("1) To create linked list\n");
        printf("2) To traverse linked list\n");
        printf("10) Exit\n");
        scanf("%d", &option);
        switch(option){
            case 1:
                  printf("Enter the number of nodes: ");
                  scanf("%d", &num);
                  createlist(num);
                  break;
            case 2:
                   traverse();
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
