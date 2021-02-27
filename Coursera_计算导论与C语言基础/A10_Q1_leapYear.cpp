/*
编程题＃1：判断闰年
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
判断某年是否是闰年。

输入
输入只有一行，包含一个整数a(0 < a < 3000)

输出
一行，如果公元a年是闰年输出Y，否则输出N

样例输入
2006
样例输出
N

提示
公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年， 
能被3200整除的也不是闰年，如1900年是平年，2000年是闰年，3200年不是闰年。
*/
#include <iostream>
using namespace std;

bool judge(int year)
{
    bool flag = false;
    if (year % 4 == 0) //能被4整除
    {
        flag = true;
        if (year % 100 == 0 && year % 400 != 0) flag = false;//剔除能被100整除而不能被400整除
        if (year % 3200 == 0) flag = false;//剔除能被3200整除
    }
    return flag;
}
int main()
{
    int year;
    cin >> year;
    bool flag = judge(year);
    if (flag) cout << 'Y' << endl;
    else cout << 'N' << endl;
    return 0;
}