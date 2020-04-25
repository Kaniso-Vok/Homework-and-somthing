#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
/*
  方法一
递归的方式只适用于求较为前面的 Fibonacci数 （一旦稍大运行时间就会过慢）时间复杂度为O(2^n)
int Fibonacci(int n){
if (n <= 0){
	return 0;
}
if (n == 1 || n == 2){
		return 1;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
*/

/*
     方法二
int Fibonacci(int n){
	//使用动态规划，在堆上开辟空间，将每一个数保存  时间复杂度为O(n)
	int* num = new int[n + 1];
	num[0] = 0;
	num[1] = 1;
	for (int i = 2; i <= n; i++){
		num[i] = num[i - 1] + num[i - 2];
	}
	return num[n];
	delete[] num;
}
*/

//方法三，不用申请空间，使用两个变量不断更新的方法来计算结果，每次只保存两个结果值
// F(n) = F(n - 1) + F(n - 2)
//int Fibonacci(int n){
//	if (n <= 0){
//		return 0;
//	}
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	int num1=1, num2=1,fin=0;
//	for (int i = 3; i <= n; i++){
//		fin = num1 + num2;
//		num1 = num2;
//		num2 = fin;
//	}
//	return fin;
//}
//
//int main(){
//	int n;
//	while (cin >> n){
//		cout << Fibonacci(n) << endl;
//	}
//	return 0;
//}