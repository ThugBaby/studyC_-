#include <stdio.h>

struct Student{
	char *name;
	int age;
	float score;
};

void display(struct Student stu)
{
	printf("%s��������%d,�ɼ��� %f\n",stu.name,stu.age,stu.score);
}

int main1()
{
	struct Student stu1;
	stu1.name="С��";
	stu1.age=15;
	stu1.score=92.5;
	display(stu1);
	return 0;
}




