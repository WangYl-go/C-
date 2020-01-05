// 结构体案例2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

struct Hero
{
    string name;

    int age;

    string sex;
};

//排序函数
void bubbleSort(Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; ++i)
    {
        for (int j = 0; j < len - i - 1; ++j)
        {
            //如果j下标的元素年龄 大于 j+1，交换两个元素
            if (heroArray[j].age > heroArray[j+1].age)
            {
                Hero hero_temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = hero_temp;
            }
        }
    }
}

//打印函数
void printHero(Hero heroArray[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << "姓名：" << heroArray[i].name 
             << "\t年龄：" << heroArray[i].age
             << "\t性别：" << heroArray[i].sex << endl;
    }
}

int main()
{
    //1、设计英雄结构体

    //2、创建数组存放5名英雄
    Hero heroArry[5] =
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"}
    };

    int len = sizeof(heroArry) / sizeof(heroArry[0]);

    //for (int i = 0; i < len; ++i)
    //{
    //    cout << "姓名：" << heroArry[i].name << endl;
    //    cout << "性别：" << heroArry[i].sex << endl;
    //    cout << "年龄：" << heroArry[i].age << endl;
    //}

    //3、对数组进行排序，按照年龄进行升序排序
    bubbleSort(heroArry, len);
    //4、将排序后结果打印输出
    printHero(heroArry, len);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
