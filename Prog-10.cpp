#include<iostream>
using namespace std;
class A
{
	public: 
	int a;
	int b;
	int c;
	void sum(int a,int b)
	{
		c=a+b;
		cout<<"SUM IS : "<<c<<endl;
	}
};
class B
{
	public: 
	int a;
	int b;
	int c;
	void sub(int a,int b)
	{
		c=a-b; 
		cout<<"SUBSTRACTION IS : "<<c;
	}
};
class C: public A,public B
{
	public:
	void print(int a,int b)
	{
	cout<<"VALUE OF  a: "<<a<<endl;
	cout<<"VALUE OF  b: "<<b<<endl;
	}
};
int main()
{
	C o;
	o.print(55,35);
	o.sum(55,35);
	o.sub(55,35);
}
