// #include<stdio.h>
// typedef struct Node{
//     int date;
//     struct Node* next;
// }Node;
// typedef struct Node* LinkList;
// LinkList createNode(int date){
//     LinkList newNode=(LinkList)malloc(sizeof(Node));
//     if(newNode==NULL){
//         printf("内存分配失败！\n");
//     }
//     newNode->date=date;
//      newNode->next=NULL;
//     return newNode;
// }
// void reverse(LinkList* head){

// }
#include <stdio.h>
#include <string.h>
typedef struct Student {
    char name[20];
    int finaltext;
    int classtest;
    char leader;
    char wester;
    int paper;
    int money;
}students;
int main() {
    int n;
    scanf("%d", &n);
    students s[50];
    int totalmoney = 0;
    int maxmoney = 0;
    char maxname[20]={0};
   for (int i = 0; i < n; i++) {
        scanf("%s %d %d %c %c %d", s[i].name, &s[i].finaltext, &s[i].classtest, &s[i].leader, &s[i].wester, &s[i].paper);
        s[i].money = 0;
      if (s[i].finaltext > 80 && s[i].paper >= 1) {
            s[i].money += 8000;
        }
        if (s[i].finaltext > 85 && s[i].classtest > 80) {
            s[i].money += 4000;
        }
        if (s[i].finaltext > 90) {
            s[i].money += 2000;
        }
       if(s[i].finaltext>85&&s[i].wester=='Y'){
           s[i].money += 1000;
       }
        if (s[i].classtest > 80 && s[i].leader == 'Y') {
            s[i].money += 850;
        }
        totalmoney +=s[i].money;
       if(s[i].money>maxmoney){
           maxmoney=s[i].money;
           int j=0;
           while(s[i].name[j]!='\0'){
               maxname[j]=s[i].name[j];
               j++;
           }
           maxname[j]='\0';
       }
   }
       
       printf("%s\n%d\n%d\n", maxname,maxmoney,totalmoney);
       
       return 0;
}
       
       
       
       
       
       
    