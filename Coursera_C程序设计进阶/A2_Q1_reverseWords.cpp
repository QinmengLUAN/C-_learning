/*
编程题＃1：单词翻转
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
输入一个句子（一行），将句子中的每一个单词翻转后输出。

输入
只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。所谓单词指的是所有不包含空格的连续的字符。

这道题请用cin.getline输入一行后再逐个单词递归处理。

输出
翻转每一个单词后的字符串，单词之间的空格需与原文一致。

样例输入
hello    world.

样例输出
olleh    .dlrow
*/
#include<iostream>
#include<ctype.h>
using namespace std;
int flip(char *, int ,int );
int main() {
    //输入 
    char str[501];
    cin.getline(str,501);
     
    int i = 0, k = 0;
    bool start_flag = true, //新单词开始标志 
         flip_flag = false; //翻转标志 
         
    char word[501] = {'\0'};
    while(str[i]) {
        if(str[i] != ' ') {          //本来判断是否为字母，发现OJ不通过，就稍微宽松些 
            if(start_flag) {           //判断是否为单词的开始处 
                start_flag = false;
                flip_flag = false;
                k = 0;                //将记录单词的字符串索引置0 
            }    
            word[k++] = str[i];
            
                
        } else {
            start_flag = true;
            //翻转单词并输出 
            if(!flip_flag) {   //防止多空格出现重复翻转 
                word[k] = '\0';      
                flip(word,0,k-1);
                cout << word;
                flip_flag = true;
            }
            //输出空格 
            cout << " ";
        }
        ++i;
    }
    //最后一个单词（没有进入循环） 
    if(!flip_flag) {     
        word[k] = '\0';     
        flip(word,0,k-1);
        cout << word;
    }
    return 0;
}
//单词翻转函数 
int flip(char *word, int start, int end) {
    if(start >= end) 
        return 0;
    char temp = word[start];
    word[start] = word[end];
    word[end] = temp;
    flip(word, ++start, --end);
    return 0;
}