 #include<stdio.h>
 #include<stdlib.h>
 //初始化差分数组
 void intalizeArraydiff(int *a,int *diff,int n){
    for(int i=1;i<n;i++){
 diff[i]=a[i]-a[i-1];
 }
 }//对差分数组的指定区间进行加减运算
 void rangeDiff(int *a,int *diff,int n,int l,int r,int val){
diff[l]+=val;
(r+1)<n?diff[r+1]-=val:0;
 }
 //对经过差分运算的数组进行前缀和运算进而得到原数组
 int* createPrefixSum(int *diff,int n){
    
    int *prefix=(int*)malloc(n*sizeof(int));//动态分配数组空间，实现函数返回数组的功能
    prefix[0]=diff[0];
    for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+diff[i];
    }
    
    return prefix;
    
 }
 int main()
{
    int a[]={1,2,4,5,3,6};
    printf("数组a的元素为：1，2，4，5，3，6\n");
    int n=sizeof(a)/sizeof(a[0]);
     int diff[100];
    diff[0]=a[0];
    intalizeArraydiff(a,diff,n);
      printf("a数组的差分数组为：\n");
    for(int i;i<n;i++){
printf("%d ",diff[i]);
}printf("\n");

    int l,r,val;
     printf("请输入区间的左右端点l和r：");
     scanf("%d,%d",&l,&r);

    printf("请输入要加减的值val：");
   scanf("%d",&val);

    rangeDiff(a,diff,n,l,r,val);
int *origionalArray=createPrefixSum(diff,n);//用来接收经过前缀和运算得到的原数组 
printf("为原数组区间[%d,%d]加减%d后，原数组变为：\n",l,r,val);
for(int i=0;i<n;i++){
    printf("%d ",origionalArray[i]);
}
   printf("\n");
    return 0;
}