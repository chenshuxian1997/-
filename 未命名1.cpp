#include<iostream>
#include<cstdlib>
int main()
{
	std::cout<<"比例1：x，单位毫米"<<std::endl;
	int x;
	std::cout<<"比例：";
	std::cin>>x;
	double a;
	while(std::cin>>a)
		{
			std::cout<<0.001*x*a<<std::endl<<"---------------"<<std::endl;
		}
	system("pause");
	return 0;
}
