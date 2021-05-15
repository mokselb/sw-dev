#include <iostream>
using namespace std;
class Rectangle
{
public:
	void set(int a, int b)
	{
		width = a;
		length = b;
		return;
	};
	int Sq(int wid,int len)
	{
		int c = 0;
		c = wid * len;
		return c;
	};
	int Pr(int wid, int len)
	{
		int c = 0;
		c = 2 * (wid + len);
		return c;
	};
private:
	int width = 0;
	int length = 0;
};
class Square : public Rectangle
{

};
int main()
{
	Rectangle rec;
	Square squ;
	cout << "Enter rec w and l : ";
	int w, l;
	cin >> w >> l;
	cout << endl;
	cout << rec.Pr(w, l) << endl;
	cout << rec.Sq(w, l) << endl;
	cout << "Enter squ side :";
	int a;
	cin >> a;
	cout << endl;
	cout << squ.Pr(a,a)<< endl;
	cout << squ.Sq(a,a)<< endl;
	return 0;
}

