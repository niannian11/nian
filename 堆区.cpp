#include<iostream>
using namespace std;
//

int * func()
{	
   int * p=new int(10);//���ص���new����ڴ��һ����ַ
   return p;
}

int main()
{
	int *p = func();
	cout << *p << endl;//����һֱ�ڣ��Ҳ�Ȼ�����پ�һֱ�ڣ�ֱ�������ҵ��ˡ���
	//����������
	system("pause");
	return 0;
}
