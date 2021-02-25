/*
编程题＃4：矩阵交换行
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
在main函数中， 生成一个5*5的矩阵，输入矩阵数据，并输入n，m的值。判断n，m是否在数组范围内，如果不在，则输出error；
如果在范围内，则将n行和m行交换，输出交换n，m后的新矩阵。

输入
5*5矩阵的数据，以及n和m的值。

输出
如果不可交换，则输出error

如果可交换，则输出新矩阵

样例输入
第一组
1 2 2 1 2
5 6 7 8 3
9 3 0 5 3
7 2 1 4 6
3 0 8 2 4
0 4
第二组
1 2 2 1 2
5 6 7 8 3
9 3 0 5 3
7 2 1 4 6
3 0 8 2 4
5 1

样例输出
第一组
   3   0   8   2   4
   5   6   7   8   3
   9   3   0   5   3
   7   2   1   4   6
   1   2   2   1   2
第二组
error
提示
输出error格式如下：

cout<< "error" << endl;

输出矩阵格式如下：

cout<< setw(4)<< num;

输出矩阵一行后要输出cout<< endl;

setw是iomanip库里定义的格式控制操作符，需要#include <iomanip> 包含这个头文件。

*/
#include <iostream>
using namespace std;
#include <iomanip>
bool change(int a[5][5], int n, int m)
{
    bool flag = true;
    if ((n >= 0 && n <= 4) && (m >= 0 && m <= 4))
    {
        int  line_change[5] = { 0 };
        for (int i = 0; i < 5;i++) line_change[i] = a[n][i];
        for (int i = 0; i < 5; i++) a[n][i] = a[m][i];
        for (int i = 0; i < 5; i++) a[m][i] = line_change[i];
    }
    else
    {
        flag= false;
    }
    return flag;
}

int main()
{
    int matrix[5][5] = { 0 };
    int m, n;
    m = n = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
        cin >> matrix[i][j];
        }
    cin >> n >> m;
    bool flag = change(matrix, n, m);
    if (flag)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << setw(4) << matrix[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "error" << endl;
    }
 
    return 0;
}