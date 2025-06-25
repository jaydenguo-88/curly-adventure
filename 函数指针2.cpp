#include <iostream>
#include <vector>
using namespace std;

typedef bool (*cmp_func_t)(int,int);

// 你们写的
bool myless(int a,int b)
{
    return a < b;
}

// 我写的
void mysort(vector<int> &v,cmp_func_t f)
{

}

int main()
{
    vector<int> v({1,3,5,2,4,6,8});
    mysort(v,myless);

    return 0;
}