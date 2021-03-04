/*
编程题＃1：计算矩阵边缘元素之和
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
输入一个整数矩阵，计算位于矩阵边缘的元素之和。所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。

输入
第一行为整数k，表示有k组数据。

每组数据有多行组成，表示一个矩阵：

第一行分别为矩阵的行数m和列数n（m < 100，n < 100），两者之间以空格分隔。

接下来输入的m行数据中，每行包含n个整数，整数之间以空格作为间隔。

输出

输出对应矩阵的边缘元素和，一个一行。

样例输入
2
4 4
1 1 1 1
0 0 0 0
1 0 1 0
0 0 0 0
3 3
3 4 1
3 7 1
2 0 1

样例输出
5
15
*/
#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cin >> num;

    int res[100] = { 0 };

    int m = 0, n = 0;
    for (int i = 0; i < num; i++) {
        cin >> m >> n;

        int matrix[100][100] = { 0 };
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                cin >> matrix[j][k];
                if (j == 0 || k == 0 || j == m-1 || k == n-1)
                    res[i] += matrix[j][k];
            }
        }
    }

    for (int i = 0; i < num; i++) {
        cout << res[i] << endl;
    }

    return 0;
}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int k = 0;
//     cin >> k;
//     for (int i = 0; i < k; i++)
//     {
//         int m = 0, n = 0, sum = 0;
//         cin >> m >> n;
//         for (int p = 0; p < m; p++)
//         {
//             for (int q = 0; q < n; q++)
//             {
//                 int a = 0;
//                 cin >> a;
//                 if ( p==0 || p==m-1 || q==0 || q==n-1)
//                 {
//                     sum += a;
//                 }
//             }
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
