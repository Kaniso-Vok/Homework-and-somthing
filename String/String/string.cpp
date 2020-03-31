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
//	string s3(10, '$');//字符串通过10个‘$’填充
//	string s4(s3);//使用s3的内容初始化s4
//
//	cin >> s1;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//}
//
//// 容量相关方式
//void TestString2()
//{
//	string s("hello");
//	cout << s.size() << endl;
//	cout << s.length() << endl;//size和length值一样
//	cout << s.capacity() << endl;//底层空间总大小
//
//	if (s.empty())
//		cout << "NULL string" << endl;
//	else
//		cout << "Not NULL string" << endl;
//
//	// 只清空string类中有效字符个数，不会改变底层空间的总大小
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
////   功能--将string类中的有效字符改变到n个，多的字符采用ch进行填充
//// 注意： 1. 如果是将string类中的有效元素缩小，只改变有效元素个数，不会改变底层空间大小
////       2. 如果是将string类中的有效元素增多，可能需要扩容
////扩容时将底层空间大小扩充到原来的大概1.5倍
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
//// void reserve(size_t newcapacity): 扩容
//// newcapacity > oldcapacity(string类旧空间大小)：空间增多--->容量改变(最终容量大小 >= newCapacity)，有效元素个数不变
//// newcapacity < oldcapacity(string类旧空间大小)：空间缩小，该函数直接返回 除非newcapacity < 15
//// 注意：只改变容量大小，不会改变有效元素个数
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
///*	cout << s[10] << endl;*/	// 如果越界---assert触发
//	cout << s.at(2) << endl;
//	s.at(2) = 'L';
//	cout << s << endl;
//	// 如果越界---抛出out_of_range异常
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
//	s1.append(1, ',');//在字符串后面追加1个‘，’字符
//	cout << s1 << endl;
//	s1.append("祖国");//在字符串后面追加“祖国”字符串
//	cout << s1 << endl;
//	s1.append(3, '!');//在字符串后面追加3个‘！’字符
//	cout << s1 << endl;
//}
//
//// 1. string类的扩容机制---vs--PJ  1.5倍
////                      linux--SGI 2倍
//// 2. 如果提前知道大概要往string类存放多少个元素，可以提前通过reserve将空间提供好
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
//// find正向查找  rfind逆向查找  两种查找方式得到的返回值是一样的都是目标下标
//void TestString8()
//{
//	string s("hello world");
//	size_t pos = s.find(' ');
//	if (pos != string::npos)//string:npos是个特殊值，说明查找没有匹配,如果字符串不存在包含关系，那么返回值就一定是npos.
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
//	// 获取文件的后缀 - 20190923.cpp.cpp
//	string ss("20190923.cpp.cpp");
//	pos = ss.rfind('.') + 1;
//
//	string filepox = ss.substr(pos);//substr截取字符串，从第一个参数截取到第二个参数位置，若不写第二个参数则从起始位置截取到末尾
//	cout << filepox << endl;
//}
//
//void TestString9()
//{
//	string s("hello");
//
//	for (auto e : s)//表示按次序依次将s每一位存入e（任意类型）中
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
//	auto it = s.begin();//begin（）和end（）是迭代器（iterator）本身没有值无法输出
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
//        //reverse实现
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
//	//逆置字符串s的begin（）位置到end（）位置
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