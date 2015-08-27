#include <iostream>

using std::cout;
using std::endl;

class SingletonClass{
	private: SingletonClass();
	public: static SingletonClass* get_instance();

	public: int method(int n);
	public: void status();
	private: int now;
};

SingletonClass* SingletonClass::get_instance(){
	static SingletonClass obj;	// generate when called 1st.
	return &obj;
}
SingletonClass::SingletonClass(){
	this->now = 0;
	cout << "Singleton born!" << endl;
}
int SingletonClass::method(int n){
	cout << "[" << this << "] " << "singleton method! : " << n << endl;
	this->now += n;
	return n + 1;
}
void SingletonClass::status(){
	cout << "[" << this << "] " << "now! : " << this->now << endl;
}

int main(void){
	cout << "hello singleton" << endl;
	SingletonClass* obj1 = SingletonClass::get_instance();
	obj1->method(10);
	obj1->status();

	SingletonClass* obj2 = SingletonClass::get_instance();
	obj2->method(100);
	obj2->status();
	return 0;
}

