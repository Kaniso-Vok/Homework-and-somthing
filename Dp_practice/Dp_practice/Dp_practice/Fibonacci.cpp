#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
/*
  ����һ
�ݹ�ķ�ʽֻ���������Ϊǰ��� Fibonacci�� ��һ���Դ�����ʱ��ͻ������ʱ�临�Ӷ�ΪO(2^n)
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
     ������
int Fibonacci(int n){
	//ʹ�ö�̬�滮���ڶ��Ͽ��ٿռ䣬��ÿһ��������  ʱ�临�Ӷ�ΪO(n)
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

//����������������ռ䣬ʹ�������������ϸ��µķ�������������ÿ��ֻ�����������ֵ
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