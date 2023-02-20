#include <iostream>

using namespace std;
class String
{
public:
	String (char *Head); 
	void Reverse();
	void Print();
	private:
	char head[100];
};
String::String(char *Head)
{
	int i = 0;
	char *p=Head;
	while(*p!='\0')
	{
		head[i]=*p;
		i++;
		p++;
	}
	head[i]='\0';
}
void String::Reverse()
{
	int i=0;
	char h[100],*p=head;
	while(*p!='\0') p++;
	while(*p!=head[0])
	{
		p--;
		h[i]=*p;
		i++;
	}
	h[i]='\0';
	while(i>=0)
	{
		head[i]=h[i];
		i--;
	}
}
void String::Print()
{
	char *p=head;
	for(;(*p)!='\0';p++) cout<<(*p);
	cout<<endl;
}
int main()
{
	char *Head="abc";
	String s(Head);
	cout<<"ÕýÐò:";
	s.Print();
	s.Reverse();
	cout<<"ÄæÐò:";
	s.Print();
	system("pause");
	return 0;
}
