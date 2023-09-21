#include <iostream>
using namespace std;

int main()
{
    // 指向地址为0的空间
    // 地址0到255是系统占用内存, 不允许用户访问
    int* p = NULL;
    cout << p<< endl;
    return 0;
}