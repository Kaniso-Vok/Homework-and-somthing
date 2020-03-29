#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	/*int n;
	while (cin >> n){
	int sum = 0;
	for (int i = n; i >1 ; i--){
	for (int m = i -1 ; m >0; m--){
	int k = m,v=i;
	if (i == 1){
	sum = m - 1;
	if ((k - v) > sum){
	sum = k - v;
	k = 0; v = 0;
	}
	continue;
	}
	while (1){
	if (i%v == 0 && m%v == 0){
	break;
	}
	v--;
	}

	while (1){
	if (k%i == 0 && k%m == 0){
	break;
	}
	k += m;
	}

	if ((k - v) > sum){
	sum = k - v;
	k = 0; v = 0;
	}
	}
	}
	cout << sum << endl;
	}*/
	int t, num1;
	while (cin >> t){
		for (int i = 0; i < t; i++){
			while (cin >> num1){
				vector<int> num2;
				for (int j = 0; j < num1; j++){
					int v;
					cin >> v;
					num2.push_back(v);
				}
				sort(num2.begin(), num2.end());
				int k = num2[0];
				int sum = 0;
				for (auto e : num2){
					if (e>k){
						e--;

					}
					sum++;
				}
				if (sum % 2 == 0){
					cout << "woman" << endl;
				}
				else{
					cout << "man" << endl;
				}
			}
		}
	}
	return 0;
}