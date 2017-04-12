#include <iostream>

using namespace std;

class Point
{
public:
  Point() //声明并定义构造函数
  {
    cout << "自定义的构造函数被调用...\n";
    xPos = 100; //利用构造函数对数据成员 xPos, yPos进行初始化
    yPos = 100;
  }
  void printPoint()
  {
    cout << "xPos = " << xPos << endl;
    cout << "yPos = " << yPos << endl;
  }

private:
  int xPos;
  int yPos;
};

int main()
{
  Point M; //创建对象M
  M.printPoint();

  return 0;
}