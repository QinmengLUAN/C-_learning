/*
准备
在开始下面的作业前，请先点击这里下载代码模版。

编程题＃1
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
下面程序输出的结果是：

0

5

请填空：

提示
所缺代码具有如下形式：
    A(_________________ ){ val = n; }
    ________________ GetObj() {
        return _________________;
    }
*/
#include <iostream>
using namespace std;
class A {
public:
    int val;
    A() {val = 0;}
    int& GetObj()
    {
        return val; 
    }
};

int main() {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
}