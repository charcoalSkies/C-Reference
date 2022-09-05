#include <iostream>
#include <climits>  // 상수의 최대 최소값이 들어있는 헤더파일
using namespace std;

int main()
{
    int a_addr;
    int b_addr;

    cout << "a" << &a_addr << endl;
    cout << "b" << &b_addr << endl;
    cout << endl;
    cout << endl;




/*----------------------------------------------------------------------*/

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // unsigned int u_int = UINT_MAX;
    // unsigned short u_short = USHRT_MAX;
    // unsigned long u_long = ULONG_MAX;
    // unsigned long long u_llong = ULONG_LONG_MAX;

    cout << "int는 " << sizeof n_int << "bytes" << endl;
    cout << "short는 " << sizeof n_short << "bytes" << endl;   
    cout << "long은 " << sizeof n_long << "bytes" << endl;
    cout << "long long은 " << sizeof n_llong << "bytes" << endl;
    cout << endl;
    cout << endl;




/*----------------------------------------------------------------------*/

    int a = 65;
    char b = a;
    a = 'A';

    cout << b << " = " << a <<  endl;



    
/*----------------------------------------------------------------------*/

    char b_arr[] = {'a', 'b', 'c', '\0'};
    cout << b_arr << endl;
    



/*----------------------------------------------------------------------*/

    bool a_bool = true;
    bool b_bool = false;

    cout << a_bool << endl;
    cout << b_bool << endl;


    return 0;    
}