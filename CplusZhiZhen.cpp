#include <iostream>
using namespace std;

void main(){
	char ch = 'a',ch1 = 'b';
	//��������ָ��
	const char* ptr = &ch;
	//��ӡ��ʼ��ָ����ָ���ֵ
	cout << *ptr<<endl;

	//���Ըı�����ָ���ֵ
	*ptr = 'c';

	//���Ĵ洢�ĵ�ַ
	ptr =&ch1;
	//��ӡ���ĵ�ַ��ָ����ָ���ֵ
	cout << *ptr<<endl;
	system("pause");
}
/*
void main(){
	char ch = 'a',ch1 = 'b';
	//����ָ�볣��
	char * const ptr = &ch;
	//��ӡ��ʼ��ָ����ָ���ֵ
	cout << *ptr<<endl;
	//�ı�����ָ���ֵ
	*ptr = 'c';
	//��ӡ���ĺ��ֵ
	cout << *ptr<<endl;

	//���Ը��Ĵ洢�ĵ�ַ
	//ptr =&ch1;
	
	system("pause");
}
*/
//ָ�����ϰ�����
//void main()
//{
//	int v1;
//	char v2[10];
//
//	cout<< "var1�����ĵ�ַ:  ";
//	cout<<&v1 <<endl;
//
//	cout<< "var2�����ĵ�ַ:  ";
//	cout<<&v2 <<endl;
//
//	system("pause");
//}



//void main(){
//	int var = 10; //����ʵ�ʱ���
//	int *ip;	  //����ָ�����
//
//	ip = &var;    //��ָ������д洢var�ĵ�ַ
//
//	//���var��ֵ
//	cout << "var: " <<var << endl; 
//
//	//���var�ĵ�ַ
//	cout <<"&var: " << &var <<endl;
//
//	//���ָ������д洢�ĵ�ַ
//	cout <<"ip: "<< ip <<endl;
//
//	//���ָ���е�ַ��Ӧ��ֵ
//	cout <<"*ip: "<<*ip <<endl;
//
//	//���ָ���е�ַ��Ӧ��ֵ�ĵ�ַ
//	cout <<"&*ip: "<< &*ip<<endl;
//
//	*ip = 20;
//	cout<<"a: "<<var<<endl;
//
//	system("pause");
//}