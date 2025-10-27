// test

#include<stdio.h>

int main(){
    printf("pleas input a number:");
    int x;
    int t=0;
scanf("%d",&x);
do{
int d=x%10;
 t=t*10+d;
x=x/10;
}while(x>0);
printf("%d\n",t);

x=t;
do{
int d=x%10;
printf("%d\n",d);
if(x>9){
    printf(" ");
}
x=x/10;
}
while(x>0);
return 0;
printf("气死我了！");
}

// test