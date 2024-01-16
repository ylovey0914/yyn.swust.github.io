#include <iostream>
//声明命名空间
using namespace std;
int main()
{
    //定义变量
    int a = 1, b = 2, c = 3, d = 4, m = 1, n = 1;
    //逻辑与的短路特性
    cout << ((m = a > b) && (n = c > d)) << endl;
    cout << "m=" << m << " n=" << n << endl;        //m = 0, n = 1
    //逻辑或的短路特性
    cout << ((m = a > b) || (n = c > d)) << endl;
    cout << "m=" << m << " n=" << n << endl;        //m = 0, n = 0
    cout << ((m = a < b) || (n = c < d)) << endl;
    cout << "m=" << m << " n=" << n << endl;        //m = 1, n = 0
    //逻辑反的特点：逻辑反的优先级高于逻辑或
    cout << (!(a > b) || (c < d)) << endl;          //输出1
    //位运算特点：按位与
    cout << (3 & 5) << endl;     //输出1
    cout << (5 & 7) << endl;     //输出5
    return 0;
}
