#include<iostream>

using namespace std;

class Stud {
    double grade;
public:
    Stud(double grade) :grade(grade) {}
    friend void Trans(Stud& A);
};
void Trans(Stud& A) {
    cout << "��ĳɼ��ȼ�Ϊ��";
    if (A.grade >= 90)
        cout << "��";
    else if (A.grade >= 80)
        cout << "��";
    else if (A.grade >= 70)
        cout << "��";
    else if (A.grade >= 60)
        cout << "����";
    else
        cout << "������";
}

int main() {
    Stud a(80);
    Trans(a);
    cout << endl;
    system("pause");
}