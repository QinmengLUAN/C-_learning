/*
编程题＃2：奇数求和
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
计算正整数 m 到 n（包括m 和 n ）之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。例如 m=3, n=12, 其和则为：3+5+7+9+11=35

输入
两个数 m 和 n，两个数以空格间隔，其中 0<=m <= n <= 300 。

输出
奇数之和
*/
#include <iostream>
using namespace std;
int main() {
    int m, n, result = 0;
    cin >> m >> n;
    while (m <= n) {
        //对于m和n之间的每一个数， 如果它是奇数，那么就加入到我们的结果里。如果不是就跳过。
        if (m % 2 == 1)
            result += m;
        m++;
    }
    //最后输出
    cout << result << endl;
    return 0;
}

// // Mehtod 2: quicker
// int main() {
//     int m, n, result = 0;
//     cin >> m >> n;

//     if (m == n) {
//         if (m % 2 == 1)
//             cout << m << endl;
//         return 0;
//     }

//     if (m % 2 == 0)
//         m++;
//     if (n % 2 == 0)
//         n--;
//     if (m == n) {
//         cout << m << endl;
//         return 0;
//     }
//     result = (m + n) * (n - m + 2) / 4;
//     cout << result << endl;
//     return 0;
// }