#include <iostream>
#include <string>
/*class A{
	protected:
		int m_a;	
};

class B:public A{
protected:
	int m_b;

};

class C:public A{
	protected:
	int m_c;

};

class D:public B,public C{
	public:
		void seta(int a){B::m_a=a;}//������ͻ(B,C����m_a)
		void setb(int b){m_b=b;}
		void setc(int c){m_c=c;}
		void setd(int d){m_d=d;}
	private:
		int m_d;
};*/

//Ϊ�˽����̳�ʱ������
//��ͻ�������������⣬C++ �������̳�
class A{
	protected:
		int m_a;
};

class B:virtual public A{//��̳�
	protected:
		int m_b;
};
class C:virtual public A{
	protected:
	int m_c;
};

class D:public B,public C{
	public:
		void seta(int a){m_a=a;}
		void setb(int b){m_b=b;}
		void setc(int c){m_c=c;}
		void setd(int d){m_d=d;}
	private:
		int m_d;
};

int main(){
	D d;
	return 0;
}
