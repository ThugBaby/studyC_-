#include <iostream>
#include <string>
using namespace std;
class Demo{
 public:
	 Demo(string s);
	 ~Demo();
 private:
	 string m_s;
};
Demo::Demo(string s):m_s(s){}
Demo::~Demo(){cout<<m_s<<endl;}

void func(){
	Demo obj1("1");
}

Demo obj2("2");

//成员对象：类中的成员变量是另一个类的对象。
//封闭类：包含成员对象的类叫做封闭类。
class Engine
{
private:
    int price;
public:
    Engine(int p)
    {
        price = p;
        cout << "Engine constructor is called" << endl;
    }
    ~Engine()
    {
        cout << "Engine deconstructor is called" << endl;
    }
};

class tyer
{
private :
    int width, length;
public:
    tyer(int w, int l) :width(w), length(l)
    {
        cout << "tyer constructor is called" << endl;
    };
    ~tyer()
    {
        cout << "tyer destructor is called" << endl;
    }
};

class car
{
private :
    tyer ty;
    Engine en;
    int color;
public:
    car(int col, int p, int w, int l);
    ~car()
    {
        cout << "car deconstructor is called" << endl;
    }
};
car::car(int col, int p, int w, int l) :color(col), en(p), ty(w, l)
{
    cout << "car constructor is called" << endl;
}

int main7(){
	Demo obj3("3");
	Demo *pobj4=new Demo("4");
	func();
	cout<<"main"<<endl;

	car car1(2, 1, 4, 5);
	return 0;
}