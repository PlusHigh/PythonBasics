// 整数溢出例子
#include <stdio.h>

int main()
{
    
 signed char i = 127;
 unsigned short j = 65535;
 unsigned short k = 0;
 // 上溢例子
 printf("%hd %hd %hd\n", i, i+1, i+2);  
 // 上溢例子
 printf("%hu %hu %hu\n", j, j+1, j+2); 
 // 下溢例子
 printf("%hu %hu %hu\n", k, k-1, k-2); 
 return 0;
}
