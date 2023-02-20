#include<iostream>

using namespace std;

class Time {
public:
	Time() { int m = 0; int s = 0; }
	Time(int m, int s) :minute(m), second(s) {}
	Time operator++();
	Time operator++(int);
	void display();
private:
	int minute;
	int second;
};
Time Time::operator++() {//Ç°ÖÃ
	if (++second >= 60) {
		second -= 60;
		++minute;
	}
	return *this;
}
Time Time::operator++(int) {//ºóÖÃ
	second++;
	if (second >= 60) {
		second -= 60;
		++minute;
	}
	return *this;
}
void Time::display() {
	cout << minute << ":" << second << endl;
}
int main() {
	Time time1(29, 0);
	for (int i = 0; i < 61; i++) {
		++time1;
		time1.display();
	}
	for (int j = 0; j < 61; j++) {
		time1++;
		time1.display();
	}
	system("pause");
	return 0;
}
