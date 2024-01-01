#include<iostream>
using namespace std;

class fruit
{
	public:
		virtual void fun()
		{
			cout<<"Mango";
		}
};

class fruit1:public fruit
{
	public:
		void fun()
		{
			cout<<"Orange";
		}
};

int main()
{
	cout<<"Shifa Khan\n0832CS221187\n";
	fruit *f,f1;
	fruit1 f2;
	f=&f2;
	f->fun();
}
