#define _CRT_SECURE_NO_WARNINGS 1
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//#include<stdio.h>
//#include<stdlib.h>
//void Exchange(int array[],int length)
//{
//	int i,m,temp;
//	for (i = 0; i < length; i++)
//	{
//		if (array[i] % 2 != 0)
//		{
//			for (m = 0; m < length; m++)
//			{
//				if (array[m] % 2 == 0)
//				{
//					temp = array[i];
//					array[i] = array[m];
//					array[m] = temp;
//					break;
//				}
//			}
//		}
//	}
//
//}
//int main()
//{
//	int i;
//	int array[] = { 1,2,3,4,5,6,7,8,9 };
//	int length = sizeof(array) / sizeof(array[0]);
//	Exchange(array, length);
//	for (i = 0; i < length; i++)
//	{
//		printf("%5d", array[i]);
//	}
//	system("pause");
//	return 0;
//}

//2.
////���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//#include<stdio.h>
//#include<stdlib.h>
//void Exchange(char str[],int leng,int length)
//{
//	char temp;
//	int i,m;
//	for (i = 1; i <= leng; i++)
//	{
//		temp = str[0];
//		for (m = 0; m < length-1; m++)
//		{
//			str[m] = str[m+1];
//		}
//		str[length - 1] = temp;
//	}
//}
//int main()
//{
//	int leng;
//	int length;
//	printf("������Ҫ���������ַ�\n");
//	scanf("%d", &leng);
//	char str[] = "ABCDEFG";
//	length = sizeof(str)/sizeof(str[0])-1;
//	Exchange(str,leng,length);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC