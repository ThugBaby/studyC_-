#include <iostream>

using namespace std;

//inlineһ�����ڶ���Ƚ϶�С�ĺ���
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