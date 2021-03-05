/*
编程题＃2：字符串中次数第2多的字母
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
输入一串长度不超过500个符号的字符串，输出在串中出现第2多的英语字母(大小写字母认为相同)和次数（如果串中有其它符号，则忽略不考虑）。如果有多个字母的次数都是第2多，则按串中字母出现的顺序输出第1个。 

例 ab&dcAab&c9defgb 

这里，a 和 b都出现3次，c和d都出现2次，e、f 和 g 各出现1次，其中的符号&和9均忽略不考虑。因此，出现第2多的应该是 c 和 d，但是 d 开始出现的位置在 c 的前面，因此，输出为 

D+d:2 

(假定在字符串中，次数第2多的字母总存在)

输入
一个字符串

输出
大写字母+小写字母:个数

样例输入
ab&dcAab&c9defgb

样例输出
D+d:2
*/
#include <iostream>
using namespace std;
int main() {
    int cnt[26] = { 0 };
    char a[501] = { 0 };
    cin.getline(a, 1000);

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 65 && a[i] <= 90)       //upper character
            cnt[a[i] - 65]++;
        else if (a[i] >= 97 && a[i] <= 122)     //lower character to upper character
        {
            a[i] -= 32;
            cnt[a[i] - 65]++;
        }
    }

    int firIdx = 0;
    int secIdx = 0;

    if (cnt[0] >= cnt[1]) {
        firIdx = 0;
        secIdx = 1;
    }
    else {
        firIdx = 1;
        secIdx = 0;
    }
    for (int i = 2; i < 26; i++) {
        if (cnt[i] > cnt[firIdx]) {
            secIdx = firIdx;
            firIdx = i;
        }
        else if (cnt[i] > cnt[secIdx]) {
            secIdx = i;
        }
    }
    cout << char(secIdx + 65) << "+" << char(secIdx + 97) << ":" << cnt[secIdx] << endl;
    return 0;
}