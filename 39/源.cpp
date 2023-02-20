#include <iostream>
#include <math.h>
using namespace std;

class shape//�������
{
public:
    virtual float area()const { return 0; }
    virtual void shapename() const = 0;
    virtual void show() const = 0;
};



class circle :public shape//������Բ
{
private: float r;
       float x, y;
public:circle() { r = 0; x = 0; y = 0; }
      circle(float a, float b, float c) { r = a; x = b; y = c; }
      float area()  const
      {
          return (3.14 * r * r);
      }
      void shapename() const
      {

          cout << "shapename:circle" << endl;

      }
      void show() const//���Բ��Ϣ
      {
          shapename();
          cout << "r:" << r << endl;
          cout << "area:" << area() << endl;
      }
};
class Square :public circle //������������
{
private:
    float a;
public:
    Square() { a = 0; }
    Square(float b) { a = b; }
    float area() const
    {
        return (a * a);
    }
    void shapename()const
    {
        cout << "shapename:Square" << endl;
    }
    void show()const//�����������Ϣ
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "area:" << area() << endl;
    }
};

class Rectangle :public Square//���������
{
private:
    float a, b;
public:
    Rectangle() { a = 0; b = 0; }
    Rectangle(float c, float d) { a = c; b = d; }
    float area()const
    {
        return (a * b);
    }

    void shapename() const
    {
        cout << "shapename:Rectangle" << endl;
    }
    void show()const//���������Ϣ
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "area:" << area() << endl;
    }
};

class Trapezoid :public shape//����������
{
private:
    float a, b, h;
public:
    Trapezoid() { a = 0; b = 0; h = 0; }
    Trapezoid(float c, float d, float e) { a = c; b = d; h = e; }
    float area()const
    {
        return ((a + b) * h) / 2;
    }
    void shapename()const
    {
        cout << "shapename:Trapezoid" << endl;
    }
    void show()const//���������Ϣ
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "h:" << h << endl;
        cout << "area:" << area() << endl;
    }

};

class Triangle :public shape //������������

{
private:
    float a, b, c;
public:
    Triangle() { a = 0; b = 0; c = 0; }
    Triangle(float d, float e, float f) { a = d; b = e; c = f; }
    float area()const //�����������
    {
        float S;
        float s = (a + b + c) / 2;
        S = sqrt(s * (s - a) * (s - b) * (s - c));
        return S;
    }
    void shapename()const
    {
        cout << "shapename: Triangle" << endl;
    }

    void show()const//������������߳��ȼ������С
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "c:" << c << endl;
        cout << "area:" << area() << endl;
    }

    int Istriangle();//�ж��Ƿ���������
};

int  Triangle::Istriangle()
{
    if ((a + b) > c && (b + c) > a && (a + c) > b)                       /*ʹ������֮�ʹ��ڵ������ж�*/
    {
        cout << "a=" << a << " b2=" << b << " c=" << c << "." << endl;           /*������߳�*/
        return 1;
    }
    else
    {
        cout << "����ı߳�����������������" << endl;//�߳��������
        return 0;
    }

}

int  main()
{
    int i;
    shape* p[5];
    for (i = 0; i < 5; i++)
        p[i] = NULL;

    float a, b, c;

    do {
        cout << "  ��ѡ��˵�              " << endl;
        cout << "  1.��Բ���              " << endl;
        cout << "  2.�����������          " << endl;
        cout << "  3.�󳤷������          " << endl;
        cout << "  4.���������            " << endl;
        cout << "  5.�����������          " << endl;
        cout << "  6.��������״ͼ������ĺ�" << endl;
        cout << "  0.�˳�                  " << endl;
        cin >> i;
        switch (i)
        {
        case 1: {
            cout << "������Բ�뾶R��������X��������Y��";
            cin >> a >> b >> c;
            circle C(a, b, c);
            p[0] = &C;
            p[0]->show();
        }break;
        case 2: {
            cout << "�����������εı߳�A��";
            cin >> b;
            Square S(b);
            p[1] = &S;
            p[1]->show();
        }break;
        case 3: {
            cout << "�����볤���εĳ��Ϳ�A��B��";
            cin >> a >> b;
            Rectangle R(a, b);
            p[2] = &R;
            p[2]->show();
        }break;
        case 4: {
            cout << "�����������ϵף��µף���A��B��H��";
            cin >> a >> b >> c;
            Trapezoid Tra(a, b, c);
            p[3] = &Tra;
            p[3]->show();
        }break;
        case 5: {
            cout << "�����������ε�����A��B��C��";
            cin >> a >> b >> c;
            Triangle Tri(a, b, c);
            p[4] = &Tri;
            if (Tri.Istriangle())
                p[4]->show();
        }break;
        case 6: {float k = 0;
            for (i = 0; i < 5; i++)
            {
                if (p[i] == NULL)
                    k = k + 0;
                else k = k + p[i]->area();
            }
            cout << "�����Ϊ��" << k << endl;
        }
              break;
        }
    } while (i != 0);





    return 0;
}