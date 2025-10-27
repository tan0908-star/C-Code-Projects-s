#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define OK 1;
#define ERROR 0;
typedef int Status;
typedef struct{
char name[10];
char Id[10];
}Student;
#define ListMax 100
typedef struct{
    Student date[ListMax];
    int length;//当前学生数量
    int capacity;//最大的容量
}SeqList;
void InitList(SeqList *L,int capacity){ 
    if(capacity>ListMax){
        printf("容量过大！\n");
        return;
    }
    L->capacity=capacity;
    L->length=0;
}
int InsertStudent(SeqList *L,Student s,int location){
    if(location<1||location>(L->length+1)){
        printf("要插入的位置不合法！\n");
        return 0;
    }
    //如果插入的元素在表尾
    if(location==L->length+1){
L->date[L->length]=s;
L->length++;
  return 1;
    }
   
    for(int i=L->length-1;i>=location-1;i--){
        L->date[i+1]=L->date[i];//往后移动元素
    }
    L->date[location-1]=s;
    L->length++;
    return 1;
}
Status DeleteStudent(SeqList *L,int location){
if(location<1||location>L->length){
    printf("要删除的位置不合法！\n");
    return ERROR;
}
//如果删除的元素在表尾
if(location==L->length){
    L->length--;
    return OK;
}
for(int i=location-1;i<L->length;i++){
    L->date[i]=L->date[i+1];//往前移动元素
}
L->length--;
return OK;
}
Status SearchStudent(SeqList *L,char *Id,int *loc){
for(int i=0;i<L->length;i++){
    if(strcmp(Id, L->date[i].Id) == 0){
        *loc=i;//返回位置（索引）
return OK;
    }
}
        printf("没有找到该学生！\n");
        return ERROR;
}
Status createStudent(SeqList *L,Student s){
    if(L->length>=L->capacity){
        printf("已经达到最大容量！\n");
        return ERROR;
    }
    L->date[L->length]=s;
    L->length++;
    return OK;
}
void PrintList(SeqList *L){
    for(int i=0;i<L->length;i++){
        printf("索引%d: 学号=%s, 姓名=%s\n", i, L->date[i].Id, L->date[i].name);
    }
}
int main(){
   SeqList list;
    Student s;

    InitList(&list, 5); 
    printf("初始化后：容量=%d, 长度=%d\n\n", list.capacity, list.length);
 
    printf("=== 添加学生 ===\n");
    printf("请输入学生的信息（学号 姓名）(中间以空格隔开，输入“ESC+空格+任意字符”结束)：\n");
    for(int i=0;i<list.capacity;i++){
        scanf("%s %s",s.Id,s.name);
        if(strcmp(s.Id,"ESC")==0){
            break; 
        }
       Student student;
strcpy(student.Id, s.Id);
strcpy(student.name, s.name);
    createStudent(&list, student);
   }
    PrintList(&list);
    printf("\n");

    printf("=== 插入学生 ===\n");
    int locInsert;
    printf("请输入要插入学生的学号和姓名（学号 姓名）（中间以空格隔开，输入“ESC+空格+任意字符”结束）：\n");
    while(1){
       scanf("%s %s", s.Id, s.name);
       if(strcmp(s.Id,"ESC")==0){break;}
        printf("请输入要插入学生的位置：\n");
        scanf("%d",&locInsert);
    Student newStudent ;
strcpy(newStudent.Id, s.Id);
strcpy(newStudent.name, s.name);
    InsertStudent(&list, newStudent, locInsert);  // 在索引loc处插入学生
    PrintList(&list);
    }
    printf("\n");

    printf("=== 查找学生 ===\n");
    int locSearch;
    printf("请输入要查找的学生学号：\n");
    scanf("%s", s.Id);
    Status Ok_No= SearchStudent(&list, s.Id, &locSearch);
        if(Ok_No==1){
        printf("找到的学生位置=%d, 学号=%s, 姓名=%s\n", locSearch+1, s.Id, s.name);
        }else{
        printf("未找到该学生！\n");}
    printf("\n");
    

    printf("=== 删除学生 ===\n");
    int locdelete;
    printf("请输入要删除的学生位置：\n");
    scanf("%d", &locdelete);
   Status Ok_Nos= DeleteStudent(&list, locdelete); 
    if(Ok_Nos==1){
        printf("删除成功！\n");
    PrintList(&list);
  }else{
    printf("删除失败！\n");
    }
    return 0;
    }




