#include <iostream>
using namespace std;

class InnerClassA
{
public:
	InnerClassA() { cout << "in ctor of InnerClassA" << endl; }
	~InnerClassA() { cout << "in dtor of InnerClassA" << endl; }
};


class InnerClassB
{
public:
	InnerClassB() { cout << "in ctor of InnerClassB" << endl; }
	~InnerClassB() { cout << "in dtor of InnerClassB" << endl; }
};


class WrapperClassA
{
public:
	WrapperClassA() {}

	InnerClassA& singleton()
	{
		static InnerClassA innerObjA;   //local static object
		return innerObjA;
	}
};

// class with non-local static object
class WrapperClassB
{
public:
	WrapperClassB() {}
	//static data member declaration
	static InnerClassB innerObjB;
};

//static member definition
InnerClassB WrapperClassB::innerObjB;

int main(int argc, char* argv[])
{
	cout << "main() started." << endl;
	WrapperClassA objA;
	objA.singleton();   //只有去掉注释执行该语句时,innerObjA才被构造出来
	objA.singleton();
	cout << "main() terminated." << endl;
	return 1;

}