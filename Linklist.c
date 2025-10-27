#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int date;
struct Node* next;
}Node;
typedef struct Node* Linklist;
Linklist createNode(int date){
    Linklist newNode=(Linklist)malloc(sizeof(Node));
    if(newNode==NULL){
        printf("内存分配失败！\n");
    }
    newNode->date=date;
    newNode->next=NULL;
    return newNode;
}
void insertBeginng(Linklist*head,int date){
    Linklist newNode=createNode(date);
    newNode->next=*head;
    *head=newNode;
}
void insertEnd(Linklist*head,int date){
    Linklist newNode=createNode(date);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    Linklist temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int insert(Linklist*head,int date,int index){
    if(head==NULL&&index<1){
        return 0;
    }
    int i=0;
    Linklist newNode=createNode(date);
    Linklist temp;
    temp->next=*head;
    if(index==0){
newNode->next=*head;
*head=newNode;
return 1;
    }
    while(newNode->next!=NULL&&i<index-1){
temp=temp->next;
i++;
if(i==index){
    newNode->next=temp->next;
    temp->next=newNode;
    return 1;
    }
}
if(temp==NULL){
    free(newNode);
    return 0;
}
}
void printList(Linklist head){
    Linklist temp=head;
    while(temp!=NULL){
        printf("%d ",temp->date);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
     Linklist head = NULL;
    
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertBeginng(&head, 5);
    
    printf("插入前: ");
    printList(head);  // 应输出: 5 10 20
    
    insert(&head, 15, 2);  // 在索引2位置插入15
    printf("插入后: ");
    printList(head);  // 应输出: 5 10 15 20
    
    return 0;
}
