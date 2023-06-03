#include <iostream>
#include<ctime> //time系统时间头文件
using namespace std;

//  2.5  冒泡排序
int test_25()
{
    int arr[9] = { 4,2,8,0,5,7,1,3,9 };

    int num = sizeof(arr)/sizeof(arr[0]);
    cout << "排序前" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //开始冒泡排序
    for (int i = 0; i < num - 1; i++)
    {
        //内层循环对比  次数=元素个数-当前轮数-1
        for (int j = 0; j < num - i - 1; j++)  //最后一位数，已经是最大数了，不需要排序了
        {
            //如果第一个数字，比第二个数字大，交换两个数字
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }

    //排序后结果
    cout << "排序后" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

//  3.6 水仙花数
int test_36()
{

}

// 4.1 break 语句
int test_41()
{

}


int main(){

    test_25();

    system("pause");

    return 0;
}


