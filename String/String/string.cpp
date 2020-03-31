//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//
//#include <string>
//
//void TestString1()
//{
//	string s1;
//	string s2("hello");
//	string s3(10, '$');//�ַ���ͨ��10����$�����
//	string s4(s3);//ʹ��s3�����ݳ�ʼ��s4
//
//	cin >> s1;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//}
//
//// ������ط�ʽ
//void TestString2()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.length() << endl;//size��lengthֵһ��
//	cout << s.capacity() << endl;//�ײ�ռ��ܴ�С
//
//	if (s.empty())
//		cout << "NULL string" << endl;
//	else
//		cout << "Not NULL string" << endl;
//
//	// ֻ���string������Ч�ַ�����������ı�ײ�ռ���ܴ�С
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	if (s.empty())
//		cout << "NULL string" << endl;
//	else
//		cout << "Not NULL string" << endl;
//}
//
//// resize / reserve
//// void resize(size_t n, char ch): 
////   ����--��string���е���Ч�ַ��ı䵽n��������ַ�����ch�������
//// ע�⣺ 1. ����ǽ�string���е���ЧԪ����С��ֻ�ı���ЧԪ�ظ���������ı�ײ�ռ��С
////       2. ����ǽ�string���е���ЧԪ�����࣬������Ҫ����
////����ʱ���ײ�ռ��С���䵽ԭ���Ĵ��1.5��
//void TestString3()
//{
//	string s("hello");
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(10, '!');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//
//	s.resize(20, '8');
//	cout << s << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(6);
//	cout << s << endl;
//
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//// void reserve(size_t newcapacity): ����
//// newcapacity > oldcapacity(string��ɿռ��С)���ռ�����--->�����ı�(����������С >= newCapacity)����ЧԪ�ظ�������
//// newcapacity < oldcapacity(string��ɿռ��С)���ռ���С���ú���ֱ�ӷ��� ����newcapacity < 15
//// ע�⣺ֻ�ı�������С������ı���ЧԪ�ظ���
//void TestString4()
//{
//	string s(20, '$');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(20);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//
//	s.reserve(40);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(24);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.reserve(10);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//
//void TestString5()
//{
//	string s("hello");
//	cout << s[0] << endl;
//	s[0] = 'H';
///*	cout << s[10] << endl;*/	// ���Խ��---assert����
//	cout << s.at(2) << endl;
//	s.at(2) = 'L';
//	cout << s << endl;
//	// ���Խ��---�׳�out_of_range�쳣
//	//cout << s.at(10) << endl;
//}
//
//void TestString6()
//{
//	string s1;
//	s1.push_back('I');
//	cout << s1 << endl;
//	s1 += " Love ";
//	cout << s1 << endl;
//	string s2("you");
//	s1 += s2;
//	cout << s1 << endl;
//	s1.append(1, ',');//���ַ�������׷��1���������ַ�
//	cout << s1 << endl;
//	s1.append("���");//���ַ�������׷�ӡ�������ַ���
//	cout << s1 << endl;
//	s1.append(3, '!');//���ַ�������׷��3���������ַ�
//	cout << s1 << endl;
//}
//
//// 1. string������ݻ���---vs--PJ  1.5��
////                      linux--SGI 2��
//// 2. �����ǰ֪�����Ҫ��string���Ŷ��ٸ�Ԫ�أ�������ǰͨ��reserve���ռ��ṩ��
//void TestPushBack()
//{
//	string s;
//	s.reserve(100);
//	size_t sz = s.capacity();
//	cout << "making s grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		s.push_back('c');
//		cout << s << endl;
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}
//
//void TestString7()
//{
//	string s("12345");
//	int ret = atoi(s.c_str());
//	cout << ret << endl;
//}
//
//// find�������  rfind�������  ���ֲ��ҷ�ʽ�õ��ķ���ֵ��һ���Ķ���Ŀ���±�
//void TestString8()
//{
//	string s("hello world");
//	size_t pos = s.find(' ');
//	if (pos != string::npos)//string:npos�Ǹ�����ֵ��˵������û��ƥ��,����ַ��������ڰ�����ϵ����ô����ֵ��һ����npos.
//	{
//		cout << ' ' << " is in s" << pos << endl;
//	}
//
//	pos = s.find("world");
//	if (pos != string::npos)
//	{
//		cout << "world" << " is in s" << pos << endl;
//	}
//
//	// ��ȡ�ļ��ĺ�׺ - 20190923.cpp.cpp
//	string ss("20190923.cpp.cpp");
//	pos = ss.rfind('.') + 1;
//
//	string filepox = ss.substr(pos);//substr��ȡ�ַ������ӵ�һ��������ȡ���ڶ�������λ�ã�����д�ڶ������������ʼλ�ý�ȡ��ĩβ
//	cout << filepox << endl;
//}
//
//void TestString9()
//{
//	string s("hello");
//
//	for (auto e : s)//��ʾ���������ν�sÿһλ����e���������ͣ���
//		cout << e; 
//	cout << endl;
//
// 	for (size_t i = 0; i < s.size(); ++i)
//		cout << s[i];
//	cout << endl;
//
//	// char*
//	// C++98
//	//string::iterator it = s.begin();
//
//	// C++11
//	auto it = s.begin();//begin������end�����ǵ�������iterator������û��ֵ�޷����
//	while (it != s.end())
//	{
//		cout << *it;
//		++it;
//	}
//	cout << endl;
//}
//
//void reversestring(string& s)
//{
//        //reverseʵ��
//	 	//char* begin = (char*)s.c_str();
//	 	//char* end = begin + s.size() - 1;
//	 	//while (begin < end)
//	 	//{
//	 	//	swap(*begin, *end);
//	 	//	begin++;
//	 	//	end--;
//	 	//}
//
//	reverse(s.begin(), s.end());
//	//�����ַ���s��begin����λ�õ�end����λ��
//}
//
//int main()
//{
//	//string s;
//	//getline(cin, s);
//	//cout << s << endl;
//	//TestString1();
//	//TestString2();
//	//TestString3();
//	/*TestString4();
//*/
//	////TestString5();
//	//TestString6();
//	//TestString7();
//	//TestString8();
//	//TestString9();
//	/*TestPushBack();
//*/
//	 	string s("hello");
//	 	cout << s << endl;
//	 	reversestring(s);
//	 	cout << s << endl;
//	return 0;
//}