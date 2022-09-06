#include <iostream>

using namespace std;

int main()
{
    int val = 3;

    cout << &val << endl;

    // C++ : 객체지향 프로그래밍 
    /*
        컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
        - 배열 생성 
        재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정 
        객체지향 프로그래밍 : 배열의 크기를 실행 시간 결졍
    */



   // 포인터 : 사용할 주소에 이름을 붙인다.
   // 즉, 포인터는 포인터의 이름이 주소를 나타낸다.
   // 간접값, 연산자, 간접 참조 연산자 *

    int *a; // c style
    int* b; // c++ style
    int* c, d; // c는 포인터 변수, d는 int형 변수


    // 예제 
    int val1 = 6;
    int* val2;

    val2 = &val1;

    cout << "val1의 값 " << val1 << endl;
    cout << "*val2의 값 " << *val2 << endl;

    cout << "val1의 주소 " << &val1 << endl;
    cout << "*val2의 주소 " << val2 << endl; 

    *val2 = *val2 + 1;

    cout << "이제 val1의 값은 " << val1 << endl;

    return 0;

}