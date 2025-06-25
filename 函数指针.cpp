#include<iostream>
using namespace std;
//函数指针

//1.函数指针的声明:将函数声明中的函数名换为"(*name)"。这个name指针指向函数的地址。初始化时可以置NULL,如果非空初始化，需要函数对象的形参和返回值严格一致。
//声明示例：double (*p)(int lines);
double cal_m1(int lines){
	return 0.05 * lines;
}
double cal_m2(int lines){
	return 0.5 * lines;
}

void estimate(int line_num, double (*pf)(int lines)){//函数指针作为形参，实现了函数嵌套函数
	cout << "The " << line_num << " need time is: " << (*pf)(line_num) << endl; //函数指针的使用："(*name)"等价于函数名
}
int main(){
	int a=10;
	estimate(10,cal_m1);
	estimate(10,cal_m2);
}