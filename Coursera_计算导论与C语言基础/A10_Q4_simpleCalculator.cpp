/*
编程题＃4：简单计算器
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。

输入
输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。

输出
输出只有一行，一个整数，为运算结果。然而：

1. 如果出现除数为0的情况，则输出：Divided by zero!

2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!

样例输入
第一组
1 2 +
第二组
1 0 /
第三组
1 0 XOR

样例输出
第一组
3
第二组
Divided by zero!
第三组
Invalid operator!

提示
可以考虑使用if和switch结构。
*/

#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    char operate;

    cin >> n1 >> n2 >> operate;
    switch (operate) {
        case '+': cout << n1 + n2 << endl; break;
        case '-': cout << n1 - n2 << endl; break;
        case '*': cout << n1 * n2 << endl; break;
        case '/': if (n2 == 0) {
            cout << "Divided by zero!" << endl;
        }
        else {
            cout << n1/n2 << endl;

        }
        break;
    default:cout << "Invalid operator!" << endl;break;
    }
    return 0;
}