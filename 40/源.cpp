#include<iostream>

using namespace std;

class Counter
{
public:
	Counter(int);
	Counter operator ++();
	Counter operator --();
	void display();
private:
	int i;
};
Counter::Counter(int a)
{
	i = a;
}
void Counter::display()
{
	cout << i;
}
Counter Counter:: operator ++()
{
	return Counter(++i);
}
Counter Counter:: operator --()
{
	return Counter(--i);
}
int main()
{
	Counter C1(5);
	cout << "C1 = "; C1.display();
	++C1;
	cout << endl << "C1 = "; C1.display();
	--C1;
	cout << endl << "C1 = "; C1.display();
	cout << endl;
	system("pause");
	return 0;
}
