#include<iostream>
using namespace std;
//

int * func()
{	
   int * p=new int(10);//返回的是new这块内存的一个地址
   return p;
}

int main()
{
	int *p = func();
	cout << *p << endl;//数据一直在，我不然它销毁就一直在，直到运行我点了×，
	//程序来结束
	system("pause");
	return 0;
}
