#include <stdio.h>

int main() {
    int num1, num2, sum;
    // 提示用户输入两个整数
    printf("请输入第一个整数：");
    scanf("%d", &num1);
    printf("请输入第二个整数：");
    scanf("%d", &num2);
    // 计算两数之和
    sum = num1 + num2;
    // 输出结果
    printf("%d + %d = %d\n", num1, num2, sum);
    return 0;
   
}                                                         