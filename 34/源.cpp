#include<iostream>

using namespace std;

class Stud {
    double grade;
public:
    Stud(double grade) :grade(grade) {}
    friend void Trans(Stud& A);
};
void Trans(Stud& A) {
    cout << "你的成绩等级为：";
    if (A.grade >= 90)
        cout << "优";
    else if (A.grade >= 80)
        cout << "良";
    else if (A.grade >= 70)
        cout << "中";
    else if (A.grade >= 60)
        cout << "及格";
    else
        cout << "不及格";
}

int main() {
    Stud a(80);
    Trans(a);
    cout << endl;
    system("pause");
}