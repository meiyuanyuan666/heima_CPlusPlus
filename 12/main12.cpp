#include <iostream>
using namespace std;
#include<ctime> //time系统时间头文件

//  2.1 单行 if 语句
int test_21()
{
    //添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));

    cout << "rand()= " << (int)rand() << endl;

    cout << "rand() % 100 = " << rand() % 100 << endl;

    //1、系统生成随机数
    int num = rand() % 100 + 1; //rand()%100 生成 0+1 ~ 99+1 随机数
    cout << num << endl;      //不显示生成的随机数是多少

    //2、玩家进行猜测
    int val = 0;  //玩家输入的数据

    while (1)
    {
        cin >> val;

        //3、判断玩家的判断
        if (val > num)
        {
            cout << "猜测过大" << endl;
        }
        else if (val < num)
        {
            cout << "猜测过小" << endl;
        }
        else
        {
            cout << "猜测您猜对了" << endl;
            break;  //break在循环中，可以利用该关键字来退出当前循环
        }
    }

}

//  3.6 水仙花数
int test_36()
{
    //1、先打印所有的三位数字
    int num = 100;

    do
    {
        //2、从所有三位数中找到水仙花数
        int a = 0;  //个位
        int b = 0;  //十位
        int c = 0;  //百位

        a = num % 10; //获取数字的个位
        b = num / 10 % 10; //获取数字的十位
        c = num / 100; //获取数字的百位
        if (a * a * a + b * b * b + c*c*c== num) //如果是水仙花数，才打印
        {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);

}

// 4.1 break 语句
int test_41()
{
    //break的使用时机

    //1、出现在switch语句中
    cout << "请选择副本难度" << endl;
    cout << "1、普通" << endl;
    cout << "2、中等" << endl;
    cout << "3、困难" << endl;

    int select = 0; 
    cin >> select; //等待用户输入

    switch (select)
    {
    case 1:
        cout << "您选择的是普通难度" << endl;
        break; //退出switch语句
    case 2:
        cout << "您选择的是中等难度" << endl;
        break;
    case 3:
        cout << "您选择的是困难难度" << endl;
        break;
    }

    //2、出现在循环语句中
    for (int i=0; i < 10; i++)
    {
        //如果i等于5，退出循环，不再打印
        if (i == 5)
        {
            break; //退出循环
        }
        cout << i << endl;
    }
    
    //3、出现在嵌套循环语句中
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
            {
                break; //退出内存循环
            }
            cout << "*";
        }
        cout << endl;
    }
}


int main(){

    test_41();

    system("pause");

    return 0;
}


