#include<stdio.h>

namespace Diy{
	class Student{
	public:
		char *name;
		int age;
		float score;
	public:
		void say(){
			printf("%s��������%d,�ɼ���%f\n",name,age,score);
		}
	};

}

int main3()
{
	Diy::Student stu1;
	stu1.name="С��";
	stu1.age=15;
	stu1.score=92.5f;
	stu1.say();
	return 0;
}