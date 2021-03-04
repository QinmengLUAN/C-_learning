/*
编程题＃3：文字排版

来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
给一段英文短文，单词之间以空格分隔（每个单词包括其前后紧邻的标点符号）。请将短文重新排版，要求如下：

每行不超过80个字符；每个单词居于同一行上；在同一行的单词之间以一个空格分隔；行首和行尾都没有空格。

输入
第一行是一个整数n，表示英文短文中单词的数目. 其后是n个以空格分隔的英文单词（单词包括其前后紧邻的标点符号，
且每个单词长度都不大于40个字母）。

输出
排版后的多行文本，每行文本字符数最多80个字符，单词之间以一个空格分隔，每行文本首尾都没有空格。

样例输入
84
One sweltering day, I was scooping ice cream into cones and told my four children they could "buy" a cone from me for a hug. Almost immediately, the kids lined up to make their purchases. The three youngest each gave me a quick hug, grabbed their cones and raced back outside. But when my teenage son at the end of the line finally got his turn to "buy" his ice cream, he gave me two hugs. "Keep the changes," he said with a smile.

样例输出
One sweltering day, I was scooping ice cream into cones and told my four
children they could "buy" a cone from me for a hug. Almost immediately, the kids
lined up to make their purchases. The three youngest each gave me a quick hug,
grabbed their cones and raced back outside. But when my teenage son at the end
of the line finally got his turn to "buy" his ice cream, he gave me two hugs.
"Keep the changes," he said with a smile.
*/
#include <iostream>
using namespace std;
int main() {
    int m;
    int i = 0, j = 0, k = 0, c = 0;
    int b[1000] = { 0 }; //存放每个单词的字符数
    char a[1000][40] = {}; //存放输入的短文

    cin >> m; //输入短文的单词数

    for(i = 0; i < m; i++) cin >> a[i];

    for(i = 0; i < m; i++) {//计算每个单词的字符数
        for(j = 0;j < 40; j++) { 
            if(a[i][j] != '\0') b[i]++;
            else break;
        }
    }


    for(i = 0; i < m; i++) { //输出短文
        k = k + b[i] + 1; //累计字符，空格算1
        if(k > 81) { //字符数大于80，输出
            for(j = c; j < i - 1; j++) //c 输出单词数总和
                cout << a[j] << " "; //循环输出单词和空格，
            cout << a[j] << endl; //输出k<80的最后一个单词，并换行
            k = 0, c = i, i--; //i--与j<i-1对应，使每一行的输出数不大于80
        }
    }
    
    for(j = c; j < i - 1; j++)
        cout << a[j] << " ";
    cout << a[j] << endl;
    return 0;

}