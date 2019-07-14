#include <iostream>

using namespace std;

//inline一般用于定义比较短小的函数
inline void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}

int main6()
{
	int m,n;
	cin>>m>>n;
	cout<<m<<","<<n<<endl;
	swap(&m,&n);
	cout<<m<<","<<n<<endl;
	return 0;
}