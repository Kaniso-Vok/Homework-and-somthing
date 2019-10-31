//#include <iostream> 
//#include <cstdio> 
//using namespace std;
//int f(int n) {
//	if (n <= 2)
//		return 1;
//	int a = 1, b = 1;
//	for (int i = 3; i <= n; i++) {
//		a += b;
//		swap(a, b);
//		b %= 10007;
//	}
//	return b;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//}

//#include<iostream>
//using namespace std;
//void Fc(char* &a){
//	int i = 0;
//	int m[200] = { 0 };
//	while ((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
//		if (m[a[i]] == 0){
//			m[a[i]]++;
//			cout << a[i];
//		}
//		if (a[i] == ' '){
//			return;
//		}
//		++i;
//	}
//}
//int main(){
//	char * x;
//	x = new char[100];
//	cin >> x;
//	Fc(x);
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
// 
//int main(){
//	int r;
//	double s, PI=3.14159265358979323;
//	cin >> r;
//    s = PI*r*r;
//    printf("%.7lf", s);
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main(){
//	long long int n,sum=0;
//	cin >> n;
//	sum = n + n*(n - 1) / 2;
//	cout << sum;
//	system("pause");
//}