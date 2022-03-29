// Task 5

#include <iostream>
#include <string>
using namespace std;

class Area {
    public:
        float length;
        float breadth;
        float returnArea(void);
};

float Area::returnArea(void){
    return length*breadth;
};

int main()
{
    Area rectangle;
    cin >> rectangle.length >> rectangle.breadth;
    cout << rectangle.returnArea();
}