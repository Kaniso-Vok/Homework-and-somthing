# practice1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
    int i=0,sum=0;
    for (i = 0; i < 32;i++)
    {
        sum+=((value>> i) &1) * (int)pow(2, 31 - i);//反转后依次每位二进制序列重新计算
    }
    return sum;
}
int main()
{
    int n = 25,result;
    result=reverse_bit(n);
    printf("%u", result);
    system("pause");
    return 0;
}
