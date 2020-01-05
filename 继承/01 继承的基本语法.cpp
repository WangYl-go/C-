
#include <iostream>
using namespace std;


//普通实现页面

//JAVA页面
//class JAVA
//{
//public:
//    void header()
//    {
//        cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "JAVA、Python、C++...（公共分类列表）" << endl;
//    }
//    void content()
//    {
//        cout << "JAVA学科视频" << endl;
//    }
//};
//
//class CPP
//{
//public:
//    void header()
//    {
//        cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "JAVA、Python、C++...（公共分类列表）" << endl;
//    }
//    void content()
//    {
//        cout << "C++学科视频" << endl;
//    }
//};


//继承实现页面

//公共页面类

class BasePage
{
public:
    void header()
    {
        cout << "首页、公开课、登录、注册...（公共头部）" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
    }
    void left()
    {
        cout << "JAVA、Python、C++...（公共分类列表）" << endl;
    }
};

//继承的好处：减少重复代码
//语法：class子类 : 继承方式 父类
//子类 也成为 派生类
//父类 也成为 基类

//JAVA页面
class JAVA : public BasePage
{
public:
    void content()
    {
        cout << "JAVA学科视频" << endl;
    }
};

//C++页面
class CPP : public BasePage
{
public:
    void content()
    {
    cout << "C++学科视频" << endl;
    }
};

void test01()
{
    cout << "JAVA下载视频页面" << endl;
    JAVA ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.footer();
    cpp.content();
}


int main()
{
    test01();
    return 0;
}