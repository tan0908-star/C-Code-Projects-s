// #include<stdio.h>
// int main(){
//  int a[]={1,2,3,5,9,6};
//  printf("数组a的元素为：1，2，3，5，9，6\n");
//  int n=sizeof(a)/sizeof(a[0]);
//  int prefixSum[100];
//  prefixSum[0]=0;
//  for(int i=1;i<n;i++){
//     prefixSum[i]=prefixSum[i-1]+a[i];
//  }
//  int l,r;
//  printf("请输入区间的左右端点l和r：");
//  scanf("%d,%d",&l,&r);
//  int sum=prefixSum[r]-(l>0?prefixSum[l-1]:0);
//  printf("求数组a的[%d,%d]区间的和为%d：",l,r,sum);

// return 0;
// }
 #include<stdio.h>
 #include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   *returnSize=2;
   int *result=(int*)malloc(sizeof(int)*(*returnSize));
  for(int i=0;i<numsSize-1;i++){
for(int j=i+1;i<numsSize;j++){
if(nums[i]+nums[j]==target){
result[0]=i;
result[1]=j;
return result;
}
}
}
return NULL;
  }
  int main(){
int nums[10]={1,2,4,6,7,8,10};
  int numsSize=sizeof(nums)/sizeof(nums[0]);
  int target=9;
   int returnSize=0;
  int* result=twoSum(nums,10,target,&returnSize);
  if(result!=NULL){
printf("%d %d\n",result[0],result[1]);
  }else{
   printf("没有找到两个数的和为%d的元素！\n",target);
  }
  return 0;
} 

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
//   int K;
//   int N;
 
//   scanf("%d %d",&N,&K);
//   for(int i=0;i<N;i++){
// scanf("%lld",&a[i]);
// printf("\n");
//   } 
//   long long a[N];
//   int count=0;
// for(int m=0;m<N-1;m++){
// for(int n=m+1;n<N;n++){
// int sum=a[m]+a[n];
// if(sum%K==0){
//   count++;
// }
// }
// }printf("%d",count);
//   return 0;
// }
