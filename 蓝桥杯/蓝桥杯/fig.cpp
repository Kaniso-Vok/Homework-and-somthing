#define _CRT_SECURE_NO_WARNINGS 1
//»ù´¡Á·Ï°
#include<iostream>
using namespace std;

void Swap(char* s,int k){
	char* str ;
	char* sta ;
	char temp;
	int j,m=0,l=1,o=0;
	char t[27];
	while (s[o] != ' '){
		t[o] = s[o];
		o++;
	}
	for (int i = 0; i < k; ++i){
		str = s;
		sta = str;
		temp = t[i+1];
		l++;
		for ( m = 0; *(sta + m) != ' '; ++m){
			cout << *(sta + m);
		}
		cout << endl;
		for (j = m-1; j>0; --j){
			*(sta + j) = *(sta+j-1);
		}
		*sta = temp;
	}
}
int main(){
	int a, b, i;
	cin >> a >> b;
	if (a >= 1 && b <= 26){
		char s[27];
		for (i = 0; i < b; ++i){
			s[i] = (char)(65+i);
		}
		s[i] = ' ';
		Swap(s, a);
	}
	system("pause");
	return 0;
}


//int main(){
//	int a, b, c, d, e;
//	for (int a = 0; a <= 1; ++a)
//	for (int b = 0; b <= 1; ++b)
//	for (int c = 0; c <= 1; ++c)
//	for (int d = 0; d <= 1; ++d)
//	for (int e = 0; e <= 1; ++e)
//		cout << a << b << c << d << e<<endl;
//	system("pause");
//	return 0;
//}


//int main(){
//	int year;
//	cin >> year;
//	if (year >= 1990 && year <= 2050){
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ){
//			cout << "yes";
//		}
//		else{
//			cout << "no";
//		}
//	}
//	system("pause");
//	return 0;
//}


//void swap(int* a,int* b){
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//int main(){
//	int n,i,j;
//	int a[201];
//	cin >> n;
//	if (n >= 1 && n <= 200){
//		for (i = 0; i < n; ++i){
//			cin >> a[i];
//			if (a[i] >= 10000){
//				return 0;
//			}
//		}
//		i = 0;
//		while (i < n){
//			for (j = i; j < n; ++j){
//				if (a[i]>a[j]){
//					swap(&a[i], &a[j]);
//				}
//			}
//			i++;
//		}
//	}
//	for (i = 0; i < n; ++i)
//		cout << a[i]<<' ';
//	return 0;
//}