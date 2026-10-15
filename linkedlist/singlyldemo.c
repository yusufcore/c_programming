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

void insertnewnode(int pos, int data){
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->data = data;
    if(pos==1){
        temp->next=head;
        head=temp;
    }else{
        struct Node* p = head;
        int i = 1;
        while((p->next!=NULL)&&(i<pos-1)){
            p = p->next;
            i++;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

void deletenode(int pos){
    struct Node* temp;
    if(pos==1){
        temp = head;
        head = temp->next;
        temp = NULL;
        free(temp);
    }else{
    struct Node* p = head;
    struct Node* q;
    int i;
    while((p->next!=NULL)&&(i<pos-1)){
        q=p;
        p=p->next;
        i++;
    }
    q->next=p->next;
    p->next=NULL;
    free(p);
}
}

int count(){
    struct Node* p=head;
    int count = 1;
    while(p->next!=NULL){
        p=p->next;
        count++;
    }
    return count;
}

int main(){
    int option;
    int num;
    int data,pos;
    while(1){
        printf("1) To create linked list\n");
        printf("2) To traverse linked list\n");
        printf("3) To insert a new node\n");
        printf("4) To delete a node\n");
        printf("5) Count the number of nodes in the list\n");
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
            case 3:
                   printf("Enter the data: ");
                   scanf("%d", &data);
                   printf("Enter the position to be inserted: ");
                   scanf("%d", &pos);
                   insertnewnode(pos,data);
                   break;
            case 4:
                   printf("Enter the position to be deleted: ");
                   scanf("%d", &pos);
                   deletenode(pos);
                   break;
            case 5:
                  int len = count();
                  printf("The number of nodes in the current list is: %d\n", len);
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
