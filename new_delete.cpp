#include <iostream>

using namespace std;

/*int main()
{
	double *pvalue=NULL;
	pvalue=new double;
	
	*pvalue=29323.99;
	cout<<"Value of pvalue:"<<*pvalue<<endl;
	
	delete pvalue;
	
	return 0;
	
}
*/
class Box
{
public:
	Box(){
		cout<<"���ù��캯��!"<<endl;
	}
	~Box(){
		cout<<"������������!"<<endl;
	}
	
};
//��ά����
int main5()
{
    int **p;   
    int i,j;   //p[4][8] 
    //��ʼ����4��8�еĶ�ά����   
    p = new int *[4];
    for(i=0;i<4;i++){
        p[i]=new int [8];
    }
	
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    //��ӡ����   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0) cout<<endl;   
            cout<<p[i][j]<<"\t";   
        }
    }   
    //��ʼ�ͷ�����Ķ�   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    delete [] p; 
	cout<<endl;
	
	Box *myBoxArray=new Box[4];

	delete [] myBoxArray;
    return 0;
}


