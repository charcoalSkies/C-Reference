#include <iostream>

using namespace std;


int main()
{
    const float PI = 3.141592;
    int r = 3;
    float area = r * r * PI;

    cout << area << endl;
    

/*-----------------------------------------------------------*/

    int a = 3.141592;
    cout << a << endl;

    // 강제 데이터 형변환 
    // typeName(a)  , (typeName)a
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;

    // C++ 전용
    cout << static_cast<int>(ch) << endl; 

    return 0;
}