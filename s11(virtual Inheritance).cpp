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
		void seta(int a){B::m_a=a;}//命名冲突(B,C都有m_a)
		void setb(int b){m_b=b;}
		void setc(int c){m_c=c;}
		void setd(int d){m_d=d;}
	private:
		int m_d;
};*/

//为了解决多继承时的命名
//冲突和冗余数据问题，C++ 提出了虚继承
class A{
	protected:
		int m_a;
};

class B:virtual public A{//虚继承
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
