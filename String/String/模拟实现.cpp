#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
using namespace std;

//基础模拟实现
//构造函数
//拷贝构造
//析构函数
//增删查改

class String{
public:
	String(const char* str = ""){
		if (str == nullptr){
			assert(false);
			return;
		}
		size_=strlen(str);
		capacity_ = size_ + 1;
		str_ = new char[size_ + 1];
		strcpy(str_, str);
	};
	String(const String& s)
		:str_(new char[s.capacity_]){
		strcpy(str_, s.str_);
		size_ = s.size_;
		capacity_ = s.capacity_;
	}
	~String(){
		if (str_){
			size_ = 0;
			capacity_ = 0;
			delete[] str_;
			str_ = nullptr;
		}
	}
	String& operator=(String s){
		if (this != &s){
			swap(str_, s.str_);
			capacity_ = s.capacity_;
			size_ = s.size_;
		}
		return *this;
	}
	bool operator<(const String& s){
		return strcmp(str_, s.str_) < 0;
	}
	bool operator>(const String& s){
		return strcmp(str_, s.str_) > 0;
	}
	bool operator<=(const String& s){
		return ((*this < s) || (*this == s));
	}
	bool operator>=(const String& s){
		return !(*this<s);
	}
	bool operator==(const String& s){
		return strcmp(str_, s.str_) == 0;
	}
	bool operator!=(const String& s){
		return !(*this == s);
	}



private:
	char* str_;
	size_t size_;
	size_t capacity_;
};

int main(){
	String a = "abc";
	String b="abc";

	if (a != b){
		cout << 1<<endl;
	}

	return 0;
}




