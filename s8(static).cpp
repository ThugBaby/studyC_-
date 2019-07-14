#include <iostream>
using namespace std;

class Student{
public:
	Student(char *name,int age,float score);
	void show();
public:
	//静态成员函数
	static int getTotal();
	static float getPoints();
private:
	static int m_total;
	static float m_points;//总成绩
private:
	char *m_name;
	int m_age;
	float m_score;
};

//初始化静态成员变量
int Student::m_total=0;
float Student::m_points=0.0;

Student::Student(char *name,int age,float score):m_name(name),m_age(age),m_score(score){
	m_total++;
	m_points+=m_score;

}


void Student::show(){

	cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<"（当前共有"<<m_total<<"名学生"<<endl;

}

int  Student::getTotal(){return m_total;}
float Student::getPoints(){return m_points;}

int main8()
{
	(new Student("小杨",15,90))->show();
	(new Student("小张",16,80))->show();
	(new Student("小莉",17,99))->show();

	int total=Student::getTotal();
	float points=Student::getPoints();
	cout<<"当前共有"<<total<<"名学生，总成绩是"<<points<<",平均分是"
		<<points/total<<endl;
	return 0;
}