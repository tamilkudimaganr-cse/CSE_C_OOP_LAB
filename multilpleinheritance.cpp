#include <iostream>
using namespace std;
class rect
{
	protected:
		int l,b;
	public:
		void getdata()
		{
			cin>>l>>b;
		}
};
class square
{
	protected:
		int x;
	public:
		void get()
		{
		cin>>x;
		}
		 void findsquare()
		 {cout<<"Square of x:"<<x*x;
		 }
};
class area:public rect,public square
{
	public:
		void calculate()
		{
			cout<<"Area of the rectangle is:"<<l*b<<endl;
		}
};
int main()
{
	area a;
	a.getdata();
	a.calculate();
	a.get();
	a.findsquare();
return 0;
}
