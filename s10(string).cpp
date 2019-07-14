#include<iostream>
#include<string>

using namespace std;

int main10()
{
	/*string s1;
	string s2="fsfsdf";
	string s3=s2;
	string s4(5,'s');
	*/

	
	string test="12312312";
	//×ª»»ÎªC·ç¸ñ×Ö·û´®
	const char *r=test.c_str();
	cout<<r<<endl;
	string s1 = "first ";
    string s2 = "second ";
    char *s3 = "third ";
    char s4[] = "fourth ";
    char ch = '@';
    string s5 = s1 + s2;
    string s6 = s1 + s3;
    string s7 = s1 + s4;
    string s8 = s1 + ch;
	cout<<s5<<endl<<s6<<endl<<s7<<endl<<s8<<endl;
	
    s1.insert(1,"aaa");
	s2.insert(2,"bb");
	cout<<s1<<endl;
	cout<<s2<<endl;

	//erase()É¾³ý×Ó×Ö·û´®
	string t="fsdfsdfsdf";
	t.erase(2,1);
	cout<<t<<endl;
	string t1="fsdfsd";
	cout<<t1.substr(0,2)<<endl;
	return 0;
}