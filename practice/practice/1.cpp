#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
#include <map>
#include <stack>
#include <string>
#include <set>
#include <algorithm>
using namespace std;


int main(){
	int n;
	while (cin >> n){
		vector<vector<int> > v(n);
		for (auto& e : v){
			e.resize(n);
		}
		for (auto& e : v){
			for (auto& E : e){
				cin >> E;
			}
		}

	}	
	return 0;
}



//int sta(vector<vector<int> >& v2, int x, int y){
//	if ((x < 0 || x >= v2.size()) || (y < 0 || y >= v2[0].size())){
//		return 0;
//	}
//	if (v2[x][y] != 1){
//		return 0;
//	}
//	v2[x][y] = 2;
//	return 1 + sta(v2, x, y - 1) + sta(v2, x - 1, y) + sta(v2, x + 1, y) + sta(v2, x, y + 1);
//}
//int maxarea(vector<vector<int> >& v1){
//	int res=0;
//	for (int i = 0; i < v1.size();i++){
//		for (int j = 0; j < v1[i].size();j++){
//			if (v1[i][j] == 1){
//				int a = sta(v1, i, j);
//				res = max(a, res);
//			}
//		}
//	}
//	return res;
//}
//
//
//
//int main(){
//	vector<vector<int> > v = { { 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
//	{0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
//	{0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
//	{ 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0 },
//	{ 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0 },
//	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
//	{0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
//	{0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
//	cout << maxarea(v) << endl;
//	return 0;
//}


//int main(){
//	int n;
//	string s;
//	while (cin>>n){
//		for (int i = 0; i < n; i++){
//			cin >> s;
//			bool flag = true;
//			if (s.length() % 3 != 0){
//				cout << "No" << endl;
//				continue;
//			}
//			for (int i = 3, j = 4; j < s.length(); i+=3, j+=3){
//				if (s[i] != s[i - 3] || s[j] != s[j - 3]){
//					flag = false;
//					break;
//				}
//			}
//			if (flag){
//				vector<char> v(s.length() / 3);
//				for (int j = 0, i = 0; j < s.length(); j += 3, i++){
//					v[i] = s[j];
//				}
//				for (int i = 1; i < v.size(); i++){
//					if (v[i] < v[i - 1]){
//						cout << "No" << endl;
//						break;
//					}
//				}
//				cout << "Yes" << endl;
//			}
//			else{
//				cout << "No" << endl;
//				continue;
//			}
//		}
//
//	}
//	return 0;
//}


//int main(){
//	string s1, s2;
//	while (cin>>s1>>s2){
//		vector<int> v(s1.size(), 0);
//		int sum = 0;
//		for (char e : s2){
//			for (int i = 0; i < s1.size();i++){
//				if (s1[i] == e&&v[i]==0){
//					v[i]++;
//					sum++;
//					break;
//				}
//			}
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}


//螺旋矩阵
//int m, n;
//char a = 'A';
//int sum = 0;
//bool flag = true;
//int x = 0, y = 0,l=0,ll=0,lll=0,llll=0;
//void right(vector<vector<char>>& v){
//	if (sum == m*n){
//		flag = false;
//		return;
//	}
//	while (y<v[x].size()-ll){
//		v[x][y] = a++;
//		sum++;
//		y++;
//	}
//	y--;
//	x++;
//	l++;
//}
//void down(vector<vector<char>>& v){
//	if (sum == m*n){
//		flag = false;
//		return;
//	}
//	while (x < v.size()-lll){
//		v[x][y] = a++;
//		sum++;
//		x++;
//	}
//	x--;
//	y--;
//	ll++;
//}
//void left(vector<vector<char>>& v){
//	if (sum == m*n){
//		flag = false;
//		return;
//	}
//	while (y>=0+llll){
//		v[x][y] = a++;
//		sum++;
//		y--;
//	}
//	x--;
//	y++;
//	lll++;
//}
//void up(vector<vector<char>>& v){
//	if (sum == m*n){
//		flag = false;
//		return;
//	}
//	while (x >= 0+l){
//		v[x][y] = a++;
//		sum++;
//		x--;
//	}
//	y++;
//	x++;
//	llll++;
//}
//void full(vector<vector<char>>& v){	
//	while (flag){
//		right(v);
//		down(v);
//		left(v);
//		up(v);
//	}
//}
//
//int main(){
//	
//	while (cin >> m >> n){
//		vector<vector<char>> v(m);	
//		for (auto& o : v){
//			o.resize(m);
//		}
//
//		full(v);
//		for (auto e : v){
//			for (int i = 0; i < e.size(); i++){
//				cout << e[i] << ' ';
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}


//字符串正则表达匹配
//int main(){
//	string str1, str2;
//	while (cin>>str1>>str2){
//		int i,j;
//		for ( i = 0,j=0; i < str1.size()&&j<str2.size(); i++,j++){
//			if (str1[i] == str2[j]){
//				continue;
//			}
//			else if (str2[j] == '.'){
//				continue;
//				/*if (str2[j + 1] == '.' || str2[j + 1] == '+' || str2[j + 1] == '*'){
//
//				}
//				if (str2[j + 1] == str1[i + 1]){
//					continue;
//				}
//				else{
//					break;
//				}*/
//			}
//			else if (str2[j] == '*'){
//				if (str1[i] == str2[j + 1]){   //0
//					j++;
//					continue;
//				}
//				//duo
//				if (str1[i] != str1[i - 1]){    
//					cout << "false" << endl;
//					return 0;
//				}
//				char tmp = str1[i];
//				for (; i < str1.size(); i++){
//					if (str1[i + 1] != tmp){
//						if (str1[i + 1] == str2[j + 1]){
//							continue;
//						}
//						else{
//							cout << "false" << endl;
//							return 0;
//						}
//					}
//				}
//			}
//			else if (str2[j] == '+'){
//				char tmp = str1[i];
//				for (; i < str1.size(); i++){
//					if (str1[i + 1] != tmp){
//						if (str1[i + 1] == str2[j + 1]){
//							continue;
//						}
//						else{
//							cout << "false" << endl;
//							return 0;
//						}
//					}
//				}
//			}
//		}
//		if (i == str1.size() && j == str2.size()){
//			cout << "true" << endl;
//		}
//		else{
//			cout << "false" << endl;
//		}
//	}
//	return 0;
//}


//小明去旅游
//时间限制： 1000MS
//内存限制： 65536KB
//题目描述：
//小明想去X星球旅游，X星球有很多很多旅游景点。有些旅游景点之间有道路相连，有些旅游景点之间没有。
//
//如果景点a和b之间有道路相连，b和c之间有道路相连，那么意味着a和c之间也有道路相连。
//
//小明有若干次询问，每个询问包含两个数字，表示两个旅游点之间是否有道路相连。
//
//
//
//输入描述
//单组输入。
//
//输入的第1行包含三个正整数n、m和q，分别表示有n个旅游景点（编号为1 - n），m条道路和q个查询，三个正整数之间用空格隔开。(n <= 10000, m <= 10000, q <= 10000)
//
//接下来m行，每行包含两个正整数u和v，表示编号为u的旅游景点和编号为v的旅游景点之间有道路相连，两个数字之间用空格隔开。
//
//再接下来q行，每行也包含两个正整数x和y，查询编号为x的旅游景点和编号为y的旅游景点之间是否存在道路相连，两个数字之间用空格隔开。
//
//输出描述
//针对每一次查询，输出是否有道路相连，如果有请输出“YES”，否则输出“NO”。
//
//
//样例输入
//3 2 3
//1 2
//2 3
//3 2
//2 1
//1 3
//样例输出
//YES
//YES
//YES
//
//int main(){
//	int n, m, q;
//	while (cin>>n>>m>>q){
//		vector<int> v(n,0);
//		int a, b;
//		for (int i = 0; i < m;i++){
//			cin >> a >> b;
//			v[a - 1]++;
//			v[b - 1]++;
//		}
//		for (int i = 0; i < q; i++){
//			cin >> a >> b;
//			for (int j = a - 1; j <= b - 1; j++){
//				if (v[j] == 0){
//					cout << "NO" << endl;
//					continue;
//				}
//				cout << "YES" << endl;
//			}
//		}
//
//	}
//	return 0;
//}


//int main(){
//	vector<int> v;
//	int n, m;
//	char x = 0;
//	while ((x=getchar()) != '\n'){
//		if (x == ' '){
//			continue;
//		}
//		if (x == '-'){
//			v.push_back(-1);
//			x = getchar();
//			continue;
//		}
//		v.push_back(x-48);
//	}
//	cin >> n >> m;
//	for (int i = 0; i < v.size();i++){
//		if (v[i] == n || v[i] == m){
//			for (int j = i-1; j >= 0; j--){
//				if (v[j] != -1){
//					cout << v[j];
//					return 0;
//				}
//			}
//		}
//	}
//}


//int feo(int n){
//	if (n == 1||n == 2){
//		return 1;
//	}
//	return feo(n - 1) + feo(n - 2);
//}
//int main(){
//	int n;
//	vector<int> v;
//	while (cin >> n){
//		int num = 2 * n - 1,n1=0;		
//		if (n == 1){
//			cout << 1 << endl;
//			break;
//		}
//		else if (n == 2){
//			cout << 1 << endl;
//			cout << 1 << ' ' << 1 << ' ' << 1 << endl;
//			break;
//		}
//		else {
//			cout << 1 << endl;
//			cout << 1 << ' ' << 1 << ' ' << 1 << endl;
//			n1 = 3;
//			while (n1 <= n){
//				num = 2 * n1 - 1;
//				v.clear();
//				for (int i = 1; i <= num / 2 + 1; i++){
//					int tmp = feo(i);
//					cout << tmp << ' ';
//					v.push_back(tmp);
//				}
//				for (int i = v.size() - 2; i >= 0; i--){
//					cout << v[i] << ' ';
//				}
//				cout << endl;
//				n1++;
//			}
//		}
//	}
//	return 0;
//}


//int main() {
//	string str;
//	while (cin >> str){
//		if (str.empty()){
//			cout << "true" << endl;
//			continue;
//		}
//		map<char, char> _s = { { '(', ')' }, { '[', ']' }, { '{', '}' } };
//		stack<char> temp;
//		int flag = 0;
//		for (int i = 0; i<str.length(); ++i){
//			if (_s.find(str[i]) != _s.end())
//				temp.push(_s[str[i]]);
//			else{
//				if (temp.empty()){
//					cout << "false" << endl;
//					flag++;
//					break;
//				}
//				if (str[i] == temp.top())
//					temp.pop();
//				else{
//					cout << "false" << endl;
//					flag++;
//					break;
//				}
//
//			}
//		}
//		if (temp.empty() && flag == 0)
//			cout << "true" << endl;
//		else if (!temp.empty() && flag == 0)
//			cout << "false" << endl;
//	}
//	return 0;
//}


//int main() {
//	string str;
//	while (cin >> str){
//			map<char, char> _s = { { '(', ')' }, { '[', ']' }, { '{', '}' } };
//			stack<char> temp;
//			int flag = 0;
//			for (int i = 0; i<str.length(); ++i){
//				if (str[i] == ' '){
//					continue;
//				}
//				if (_s.find(str[i]) != _s.end())    
//					temp.push(_s[str[i]]);         
//				else{
//					if (temp.empty()){
//						cout << "false" << endl;
//						flag++;
//						break;
//					}
//						
//					if (str[i] == temp.top())    
//						temp.pop();
//					else{
//						cout << "false" << endl;
//						flag++;
//						break;
//					}
//
//				}
//			}
//			if (temp.empty()&&flag==0)
//				cout<< "true"<<endl;
//			else if (!temp.empty() && flag == 0)
//				cout<<"false"<<endl;
//		}
//	return 0;
//}


//int main(){
//	string str;
//	while (cin >> str){
//		vector<int> v(str.begin(),str.end());
//		for (int& e : v){
//			e=e-48;
//		}
//		sort(v.begin(), v.end());
//		do
//		{
//			for (int i = 0; i < v.size(); i++)
//			{
//				cout << v[i];
//			}
//			cout << " ";
//		} while (next_permutation(v.begin(), v.end()));
//
//		cout << endl;
//	}
//	return 0;
//}


//vector<int> getTriggerTime(int** increase, int increaseRowLen, int* increaseColLen, int** requirements,
//	int requirementsRowLen, int* requirementsColLen) {
//	// write code here
//	int x = 0, y = 0, z = 0;
//	int res = 0, i = 0, j = 0;
//	vector<int> v(requirementsRowLen, -1);
//	while ((i*increaseColLen) + j<(increaseRowLen*(*increaseColLen)) - 1){
//		j = 0;
//		res++;
//		x += increase[i][j++];
//		y += increase[i][j++];
//		z += increase[i][j];
//		for (int a = 0; a<requirementsRowLen; a++){
//			if (x >= requirements[a][0] && y >= requirements[a][1] && z >= requirements[a][2]){
//				v[a] = res;
//			}
//		}
//	}
//	return v;
//}


//bool judge(vector<int>& b,int s){
//	int sum = 0;
//	for (int e : b){
//		sum += e;
//	}
//	return sum > s ? true : false;
//}
//
//int main(){
//	int num, n, m;
//	while (cin >> num){
//		vector<vector<int>> v(num);
//		for (int i = 0; i < num; i++){
//			cin >> n >> m;
//			v[i].resize(n);
//			for (int j = 0; j < n; j++){
//				cin >> v[i][j];
//			}
//		}
//		for (int k = 0; k < num; k++){
//			vector<int> p(v[k]);
//			vector<int> u(p.size());
//			sort(p.begin(), p.end());
//			int sum = 0, res = 0;
//			if (judge(p, m)){
//				for (int x = p.size() - 1; x >= 0 ; x--){
//					if (sum >= m){
//						break;
//					}
//					sum += p[x];
//					int h = 0;
//					for (; h < p.size(); h++){
//						if (v[k][h] == p[x])break;
//					}
//					u.push_back(h);
//					res++;
//				}
//			}
//			else{
//				cout << -1 << endl;
//				break;
//			}
//			cout << res << endl;
//			for (int e = u.size() - 1; e >= 0;e--){
//				if (u[e] != 0){
//					cout << u[e] << ' ';
//				}
//				else
//					break;
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}


//int solve(vector<int>& a,int y,int z ){
//	int num = 0,y1=y;
//	for (int i = 0; i<a.size(); i++){
//		for (int j = i; j<a.size(); j++){
//			if (y1 == 0){
//				num++;
//				y1 = y;
//				break;
//			}
//			if (y1 > 0 && a[j] < z){
//				y1 = y;
//				break;
//			}
//			else if (a[j] >= z){
//				y1--;
//			}
//			
//		}
//	}
//	return num;
//}
//
//int main(){
//	int n, m, k;
//	while (cin >> n >> m >> k){
//		int end;
//		vector<int> v(n);
//		for (int &e : v){
//			cin >> e;
//		}
//		end = solve(v, m, k);
//		cout << end <<endl;
//	}
//	system("pause");
//	return 0;
//}


//bool judge1(int a,int b,vector<vector<int>>& k){
//	int mdd = b / 2,i=0;
//	if (k[a][b - 1] == k[a + 1][i] && k[a + 1][i] == k[a][b - 1]){
//		return true;
//	}
//	return false;
//}
//bool judge2(int a, int b, vector<vector<int>>& k){
//	int mdd = b / 2, i = 0;
//	if (k[a][b - 1] == k[a + 1][b-1] && k[a + 1][i] == k[a][i]){
//		return true;
//	}
//	return false;
//}
//
//
//int main(){
//	int m, n;
//	while (cin >> n >> m){
//		vector<vector<int>> v(n);
//		int x = 0;
//		for (auto& e : v){
//			e.resize(m);
//		}
//		for (int i = 0; i < n; i++){
//			for (int& a : v[i]){
//				cin >> a;
//			}
//		}
//		for (int i = 0; i < n; i++){
//			if (judge1(i,m,v)){
//				if (judge2(i,m,v)){
//					x = i + 1;
//					break;
//				}
//			}
//		}
//		for (int i = 0; i < x; i++){
//			for (int e : v[i]){
//				cout << e << ' ';
//			}
//			cout << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	string s;
//	int k[5] = {0};
//	bool end;
//	while (cin >> s){
//		for (char e : s){
//			if (e >= 48 && e <= 57){
//				k[0]++;
//			}
//			else if (e >= 65 && e <= 90){
//				k[1]++;
//			}
//			else if (e >= 97 && e <= 122){
//				k[2]++;
//			}
//			else{
//				k[3]++;
//			}
//			
//		}
//		if (s.length() >= 8){
//			k[4]++;
//		}
//		for (auto E : k){
//			if (E == 0){
//				cout << "Irregular password" << endl;
//				memset(k,0,sizeof(k));
//				return 0;
//			}
//		}
//		cout << "Ok" << endl;
//		memset(k, 0, sizeof(k));
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	int n, m;
//	
//	while (cin>>n>>m){
//		vector<vector<int>> k(m);
//		for (int i = 0; i < m; i++){
//			k[m].resize(2);
//		}
//		for (int i = 0; i < m; i++){
//			cin >> k[i][0] >> k[i][1];
//		}
//
//	}
//	system("pause");
//	return 0;
//}
