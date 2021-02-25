/*
编程题＃3：最长单词2
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式

输入
一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式

输出
该句子中最长的单词。如果多于一个，则输出第一个

样例输入
第一组
I am a student of Peking University.
第二组
Hello world.

样例输出
第一组
University
第二组
Hello

*/
#include <iostream>
using namespace std;
int main() {
    char s[500];
    cin.getline(s, 500);
    int end = 0;
    int cnt = 0;
    int longest = 0;

    int i = 0;
    while (i < 500) {
        if (s[i] != ' ' && s[i] != ',' && s[i] != '.') {
            cnt++;
            i++;
            if (cnt > longest) {
                longest = cnt;
                end = i;
            }
        }
        else if (s[i] == ' ' || s[i] == ',') {
            cnt = 0;
            i++;
        }
        else if (s[i] == '.' || s[i] == '\0') {
            break;
        }
    }
    for (int j = end - longest; j < end; j++) {
        cout << s[j];
    }
    cout << endl;
    return 0;
}