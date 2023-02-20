#include <iostream>
#include <math.h>
using namespace std;

class shape//抽象基类
{
public:
    virtual float area()const { return 0; }
    virtual void shapename() const = 0;
    virtual void show() const = 0;
};



class circle :public shape//派生类圆
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
      void show() const//输出圆信息
      {
          shapename();
          cout << "r:" << r << endl;
          cout << "area:" << area() << endl;
      }
};
class Square :public circle //派生类正方形
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
    void show()const//输出正方形信息
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "area:" << area() << endl;
    }
};

class Rectangle :public Square//派生类矩形
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
    void show()const//输出巨型信息
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "area:" << area() << endl;
    }
};

class Trapezoid :public shape//派生类梯形
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
    void show()const//输出梯形信息
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "h:" << h << endl;
        cout << "area:" << area() << endl;
    }

};

class Triangle :public shape //派生类三角形

{
private:
    float a, b, c;
public:
    Triangle() { a = 0; b = 0; c = 0; }
    Triangle(float d, float e, float f) { a = d; b = e; c = f; }
    float area()const //求三角形面积
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

    void show()const//输出三角形三边长度及面积大小
    {
        shapename();
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "c:" << c << endl;
        cout << "area:" << area() << endl;
    }

    int Istriangle();//判断是否是三角形
};

int  Triangle::Istriangle()
{
    if ((a + b) > c && (b + c) > a && (a + c) > b)                       /*使用两边之和大于第三边判断*/
    {
        cout << "a=" << a << " b2=" << b << " c=" << c << "." << endl;           /*法输出边长*/
        return 1;
    }
    else
    {
        cout << "输入的边长不符合三角形条件" << endl;//边长输入错误
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
        cout << "  请选择菜单              " << endl;
        cout << "  1.求圆面积              " << endl;
        cout << "  2.求正方形面积          " << endl;
        cout << "  3.求长方形面积          " << endl;
        cout << "  4.求梯形面积            " << endl;
        cout << "  5.求三角形面积          " << endl;
        cout << "  6.求所有形状图形面积的和" << endl;
        cout << "  0.退出                  " << endl;
        cin >> i;
        switch (i)
        {
        case 1: {
            cout << "请输入圆半径R，横坐标X，纵坐标Y：";
            cin >> a >> b >> c;
            circle C(a, b, c);
            p[0] = &C;
            p[0]->show();
        }break;
        case 2: {
            cout << "请输入正方形的边长A：";
            cin >> b;
            Square S(b);
            p[1] = &S;
            p[1]->show();
        }break;
        case 3: {
            cout << "请输入长方形的长和宽A，B：";
            cin >> a >> b;
            Rectangle R(a, b);
            p[2] = &R;
            p[2]->show();
        }break;
        case 4: {
            cout << "请输入梯形上底，下底，高A，B，H：";
            cin >> a >> b >> c;
            Trapezoid Tra(a, b, c);
            p[3] = &Tra;
            p[3]->show();
        }break;
        case 5: {
            cout << "请输入三角形的三边A，B，C：";
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
            cout << "总面积为：" << k << endl;
        }
              break;
        }
    } while (i != 0);





    return 0;
}