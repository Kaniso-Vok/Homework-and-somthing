#define _CRT_SECURE_NO_WARNINGS 1
//5
//1 2 3 4 5
//1 2 3 4 6
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main(){
//	int num;
//	long long a, b;
//	cin >> num;
//	for (int i = 0; i < 2; i++){
//		vector<long long> v;
//		for (int j = 0; j < num; j++){
//			long long aa;
//			cin >> aa;
//			v.insert(begin(v)+j, aa);
//		}
//		if (i == 0){
//			sort(v.begin(), v.end());
//			a = v[num - 1] + v[num - 2] + v[num - 3];
//			v.clear();
//			continue;
//		}
//		sort(v.begin(),v.end());
//		b = v[num - 1] + v[num - 2] + v[num - 3];
//	}
//	if (a > b){
//		cout << a;
//	}
//	else{
//		cout << b;
//	}
//	system("pause");
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//	int n, k,p,q;
//	long long m;
//	while (cin >> n >> k >> m){
//		while (cin >> p >> q){
//			vector<int> v;
//			for (int o = 0; o<k; o++){
//				int s;
//				cin >> s;
//				v.insert(begin(v)+o, s);
//			}
//
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;
int main(){
	int len,o=0;
	int *a, *b;
	int sum = 0,suu=0;
	while (cin >> len){
		vector<int> v, vv;
		for (int i = 0; i<len; i++){
			int s;
			cin >> s;
			v.insert(begin(v)+i, s);
		}
		vv = v;
		a = &vv[0];
		b = a;
		while (b!=nullptr){
			while (1){
				b++;
				if (*b < *(b + 1)){
					break;
				}
			}
				a = b;
				if (*(b-1) > *b){
					*(b-1) = 9090;
				}
				else{
					*b = 9090;
				}
		}
		int flg = 0;
		for (int i = 0; i<v.size(); i++){
			if (v[i+1]>v[i]){
				suu++;
			}
			else if (vv[0] == 9090 && flg == 0){
				suu++;
				flg++;
			}
			else{
				if (suu > sum){
					sum = suu;
					suu = 0;
				}
			}
		}
		cout << sum;
	}
	return 0;
}