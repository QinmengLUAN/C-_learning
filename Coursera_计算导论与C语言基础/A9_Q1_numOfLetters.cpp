/*
编程题＃1：求字母的个数
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
在一个字符串中找出元音字母a,e,i,o,u出现的次数。

输入
输入一行字符串（字符串中可能有空格，请用cin.getline(s,counts)方法把一行字符串输入到字符数组s中，其中counts是s的最大长度，这道题里面可以直接写80。），字符串长度小于80个字符。

输出
输出一行，依次输出a,e,i,o,u在输入字符串中出现的次数，整数之间用空格分隔。

样例输入
If so, you already have a Google Account. You can sign in on the right.

样例输出
5 4 3 7 3

提示
注意，只统计小写元音字母a,e,i,o,u出现的次数。
*/
#include <iostream>
using namespace std;
int main() {
    char s[80];
    cin.getline(s, 80);
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    for (int j = 0; j < 80; j++) {
        if (s[j] == 'a' )
            a++;
        else if (s[j] == 'e')
            e++;
        else if (s[j] == 'i')
            i++;
        else if (s[j] == 'o')
            o++;
        else if (s[j] == 'u')
            u++;
    }
    cout << a << ' ' << e << ' ' << i << ' ' << o << ' ' << u << endl;
    return 0;
}