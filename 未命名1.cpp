#include<iostream>
#include<cstdlib>
int main()
{
	std::cout<<"����1��x����λ����"<<std::endl;
	int x;
	std::cout<<"������";
	std::cin>>x;
	double a;
	while(std::cin>>a)
		{
			std::cout<<0.001*x*a<<std::endl<<"---------------"<<std::endl;
		}
	system("pause");
	return 0;
}
