#include "test.h"

using namespace std;

int main(int argc, char *argv[])
{
    //声明对象
    testage t1;
    testage t2;

    //为属性复制
    t1.age=34;
    t1.sex='男';
    t1.wokeName='张三';
    cout<<t1<<endl;

    return 0;
}

class testage{
public:
    int age;
    char wokeName;
    char sex;

}

