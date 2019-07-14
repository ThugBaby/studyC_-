#include <iostream>
using namespace std;

class Student{
public:
	Student(char *name,int age,float score);
	void show();
public:
	//��̬��Ա����
	static int getTotal();
	static float getPoints();
private:
	static int m_total;
	static float m_points;//�ܳɼ�
private:
	char *m_name;
	int m_age;
	float m_score;
};

//��ʼ����̬��Ա����
int Student::m_total=0;
float Student::m_points=0.0;

Student::Student(char *name,int age,float score):m_name(name),m_age(age),m_score(score){
	m_total++;
	m_points+=m_score;

}


void Student::show(){

	cout<<m_name<<"��������"<<m_age<<"���ɼ���"<<m_score<<"����ǰ����"<<m_total<<"��ѧ��"<<endl;

}

int  Student::getTotal(){return m_total;}
float Student::getPoints(){return m_points;}

int main8()
{
	(new Student("С��",15,90))->show();
	(new Student("С��",16,80))->show();
	(new Student("С��",17,99))->show();

	int total=Student::getTotal();
	float points=Student::getPoints();
	cout<<"��ǰ����"<<total<<"��ѧ�����ܳɼ���"<<points<<",ƽ������"
		<<points/total<<endl;
	return 0;
}