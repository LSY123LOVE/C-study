/*************************************************************************
	> File Name: 1.cpp
	> Author: 罗士义
	> Mail: amoscykl@163.com 
	> Created Time: 2022年06月22日 星期三 22时31分42秒
 ************************************************************************/

#include<iostream>

int main(int argc,char *argv[])
{
	long long x1 = 65536 << 16;
	std::cout << "x1 = " << x1 << std::endl;

	long long x2 = 65536LL << 16;
	std::cout << "x2 = " << x2 << std::endl;
	return 0;
}
