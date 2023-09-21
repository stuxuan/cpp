#include <iostream>
using namespace std;

int main()
{
    // 没有分配的内存直接让指针去指, 会报错
    int* p = (int*)0x01100;
    cout << p << endl;
    return 0;
}