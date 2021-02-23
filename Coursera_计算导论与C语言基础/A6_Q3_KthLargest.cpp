/*
编程题＃3：找出第k大的数
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。注意，第K大的数意味着从大到小排在第K位的数。

输入
N

K

a1 a2 a3 a4 ..... aN

输出
b

样例输入
5
2
32 3 12 5 89

样例输出
32
*/
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //遍历数组
    for (int i = 0; i < n; i++) {
        int num = 0; //记录比该数大的有几个数
        for (int j = 0; j < n; j++) {
            if (a[i] < a[j])
                num++;
         }
        if (num == k - 1)
            cout << a[i] << endl;
    }
    return 0;
}