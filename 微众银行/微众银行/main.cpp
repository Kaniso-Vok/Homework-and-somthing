#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int n;
	vector<int> x,y;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			x.push_back(a);
			y.push_back(b);
		}
	}
	return 0;
}


//int Sum_str(string& str, char& ch)
//{
//	int count = 0;
//	for (auto e:str)
//	{
//		if (e == ch)
//			count++;
//	}
//	return count;
//}
//bool Judge(string& s){
//	vector<int> v;
//	for (int e = 0; e<s.size();e++){
//		int sum = Sum_str(s,s[e]);
//		v.push_back(sum);
//	}
//	if (v.size() % 2 == 0){
//		for (auto a : v){
//			if (a % 2 != 0){
//				return false;
//			}
//		}
//	}
//	else{
//		int key = 0;
//		for (auto b : v){
//			if (b % 2 != 0){
//				key++;
//			}
//			if (key > 1){
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void Do(string& s){
//	s.pop_back();
//	return;
//}
//int main(){
//	int t;
//	while (cin >> t){
//		vector<string> st(t);
//		for (int q = 0; q < t; q++){
//			cin>>st[q];
//		}	
//		for (int i = 0; i < st.size(); i++){
//			bool key = false;
//			int yy = 0;
//			while (1){
//				yy++;
//				key = Judge(st[i]);
//				if (key == true){
//					break;
//				}
//				Do(st[i]);
//			}
//			if (yy % 2 == 1){
//				cout << "Cassidy" << endl;
//			}
//			else{
//				cout << "Eleanore" << endl;
//			}
//		}
//		}
//	return 0;
//}




//int main(){
//	int n, m, a, b;
//	int sum=0, suu=0;
//	while (cin >> n >> m >> a >> b){
//		int k = abs(n - m),p=0;
//		sum = k*a;
//		for (int i = k; i >= 0; i--){
//			suu = (k*a) + (p*b);
//			if (suu < sum){
//				sum = suu;
//			}
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}