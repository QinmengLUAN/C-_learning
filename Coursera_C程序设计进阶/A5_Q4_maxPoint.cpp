/*
编程题＃4：寻找平面上的极大点
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
在一个平面上，如果有两个点(x,y),(a,b),如果说(x,y)支配了(a,b)，
这是指x>=a,y>=b;

用图形来看就是(a,b)坐落在以(x,y)为右上角的一个无限的区域内。

给定n个点的集合，一定存在若干个点，它们不会被集合中的任何一点所支配，
这些点叫做极大值点。

编程找出所有的极大点，按照x坐标由小到大，输出极大点的坐标。

本题规定：n不超过100，并且不考虑点的坐标为负数的情况。

输入
输入包括两行，第一行是正整数n，表示是点数，第二行包含n个点的坐标，
坐标值都是整数，坐标范围从0到100，输入数据中不存在坐标相同的点。

输出
按x轴坐标最小到大的顺序输出所有极大点。

输出格式为:(x1,y1),(x2,y2),...(xk,yk)

注意：输出的每个点之间有","分隔,最后一个点之后没有",",
少输出和多输出都会被判错

样例输入
5
1 2 2 2 3 1 2 3 1 4

样例输出
(1,4),(2,3),(3,1)
*/
// Method 1: scan the while map, label the points
#include<iostream>
#include<cstring>
using namespace std;
int i,j,n,x,y,a[101][101];//a[i][j]=1,表示为极点，a[i][j]=0表示非极点 
int k,minx,maxx,maxy;//k统计总共有多少个极点,maxx记录所有点的横坐标的最大值，maxy记录所有点的纵坐标的最大值 
int main()
{
    memset(a,-1,sizeof(a));
    //将所有点的值设为-1，表示这个点的极点状态未判断过 
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(a[x][y]==-1)//如果这个点是没判断过的，则是极点 
        {
            //(0,0)和(x,y)两个点构成的平面区域内，所有点都为非极点 
               for(int m=0;m<=x;m++)
                for(int n=0;n<=y;n++)
                    a[m][n]=0;
            a[x][y]=1;//将(x,y)设为极点 
        if(x<minx)
            minx=x;
        if(x>maxx)
            maxx=x;
        if(y>maxy)
            maxy=y;
        }
    }
    //输出最后一个极点前面的极点坐标 
    for(i=minx;i<maxx;i++)
        for(j=0;j<=maxy;j++)
            if(a[i][j]==1)
                cout<<"("<<i<<","<<j<<"),";
    for(j=0;j<=maxy;j++)//输出最后一个极点坐标 
        if(a[maxx][j]==1)
            {
                cout<<"("<<maxx<<","<<j<<")"<<endl;
                break;
            }

    return 0;
}

// method 2: sort the points by x axis, loop the points.
