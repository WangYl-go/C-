// 结构体案例.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//学生的结构体
struct Student
{
    string name;
    int score;
};

//老师的结构体
struct Teacher
{
    string name;
    Student array[5];
};

void allocateSpace(Teacher T[], int len)
{
    string tName = "教师";
    string sName = "学生";
    string nameSeed = "ABCDE";

    //给老师开始赋值
    for (int i = 0; i < 3; ++i)
    {
        T[i].name = tName + nameSeed[i];

        //通过循环给每名老师所带的学生赋值
        for (int j = 0; j < 5; ++j)
        {
            int random = rand() % 61 + 40;
            T[i].array[j].name = sName + nameSeed[i];
            T[i].array[j].score = random;
        }
    }
}

//打印所有信息
void printfInfo(Teacher T[], int len)
{
    for (int i = 0; i < 3; ++i)
    {
        cout << "老师姓名：" << T[i].name << endl;
        for (int j = 0; j < 5; ++j)
        {
            cout << "\t学生姓名：" << T[i].array[j].name
                << " 学生成绩：" << T[i].array[j].score << endl;
        }
    }
}

int main()
{
    //创建随机数种子
    srand((unsigned int)time(NULL));

    //1、创建3名老师的数组
    Teacher tArray[3];

    //2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);

    //3、打印所有老师及所带的学生信息
    printfInfo(tArray, len);

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
