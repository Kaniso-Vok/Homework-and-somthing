#define _CRT_SECURE_NO_WARNINGS 1
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

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
////杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
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
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

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
//	printf("请输入要左旋几个字符\n");
//	scanf("%d", &leng);
//	char str[] = "ABCDEFG";
//	length = sizeof(str)/sizeof(str[0])-1;
//	Exchange(str,leng,length);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC