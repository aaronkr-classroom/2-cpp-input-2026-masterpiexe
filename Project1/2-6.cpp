#include<iostream>
int main()
{
	int i = 0;
	while (i < 10)//i가 0부터 9이면
	{
		i += 1;//i=i+1
		std::cout << i << std::endl;//현재 i 값을 모니터에 출력
	}
	return 0;
}
//1부터 10까지 출력하는 프로그램