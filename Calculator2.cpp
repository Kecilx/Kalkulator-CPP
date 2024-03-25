#include<iostream>
#include<stdio.h>
using namespace std;
int a,b;

void getdata()
{
	cout<<"Masukkan dua nomer:";
	cin>>a>>b;
	
}

void cal()
{
	char op;
	cout<<"+ - * ?/\n";
	cout<<"Masukkan Pilihan:";
	cin>>op;
	
	switch(op)
	{
		case '+':cout<<"Hasil="<<a+b;
			break;
		case '-':cout<<"Hasil="<<a-b;
			break;
		case '*':cout<<"Hasil="<<a*b;
			break;
		case '/':cout<<"Hasil="<<a/b;
			break;
		default:cout<<"Invalid Choice";
			break;
	}
}

int main()
{
	getdata();
	cal();
	
	return 0;
}