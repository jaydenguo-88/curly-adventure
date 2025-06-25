#include<iostream>
using namespace std;
//函数指针数组

// prototype   实质上三个函数的参数列表是等价的 
const double* f1(const double arr[], int n);
const double* f2(const double [], int);
const double* f3(const double* , int);

int main(){
	double arr[3]={12.1, 3.4, 4.5};
	//声明函数指针,同时初始化
	const double* (*p1)(const double arr[], int n)=f1;
	cout<<(*p1)(arr,3)<<":"<<*((*p1)(arr,3))<<endl;//这个3没有含义
	//声明函数指针数组(方括号),同时初始化
	const double* (*arr_ptr_arr[3])(const double*, int)={f1,f2,f3};
	cout<<(*arr_ptr_arr[0])(arr,3)<<":"<<*(arr_ptr_arr[0](arr,3))<<endl;
	cout<<arr_ptr_arr[1](arr,3)<<":"<<*(arr_ptr_arr[1](arr,3))<<endl;
	cout<<arr_ptr_arr[2](arr,3)<<":"<<*(arr_ptr_arr[2](arr,3))<<endl;
}


const double* f1(const double arr[], int n){
	return arr;     // 首地址 
}
const double* f2(const double arr[], int n){
	return arr+1;
}
const double* f3(const double arr[], int n){
	return arr+2;
}