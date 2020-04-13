#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
bool solve(long long& a){
	int sum = 0;
	int aa = a;
	while (aa){
		int tmp = aa % 10;
		sum += tmp;
		aa /= 10;
	}
	long long key = (sum * 2) + 1;
	if (key != 5){
		if (key == a){
			return false;
		}
		else if (a % 3 == 0 || key % 3 == 0){
			return false;
		}
		if (solve(key)){
			return true;
		}
	}
	return true;
}

int main(){
	long long a;
	while (cin >> a){
		if (solve(a)){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}