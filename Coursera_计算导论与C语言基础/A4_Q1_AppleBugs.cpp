/*
编程题＃1：苹果和虫子
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，
那么经过y小时你还有多少个完整的苹果？

输入
输入仅一行，包括n，x和y（均为整数）。

输出
输出也仅一行，剩下的苹果个数

样例输入
第一组
10 4 9
第二组
10 4 36
第三组
10 4 100

样例输出
第一组
7
第二组
1
第三组
0

提示
注意：是要求完整的苹果数。
*/
#include <iostream>
using namespace std;
int main() {
    // n apples, x hours can eat an apple, how many apples left after y hours
    int n, x, y;
    cin >> n >> x >> y;
    int dt;
    dt = (y + x - 1) / x;
    if ((n - dt) > 0)
        cout << n - dt << endl;
    else
        cout << 0 << endl;
    return 0;
}