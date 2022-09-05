#include <iostream>

using namespace std;

int main()
{
    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합 
    // 배열 : 같은 데이터형의 집합

    // 축구선수 
    struct Player
    {
        /* data */
        string name; 
        string position;
        float height;
        float weight;
    } player;
    
    
    Player son;
    son.name = "Son";
    son.position = "Striker";
    son.height = 183.0;
    son.weight = 77;

    Player kane = {
        "Kane",
        "Striker",
        183,
        77
    };

    cout << son.name << endl;
    cout << son.position << endl;
    cout << son.height << endl;
    cout << son.weight << endl;
    cout << "\n\n";

    cout << kane.name << endl;
    cout << kane.position << endl;
    cout << kane.height << endl;
    cout << kane.weight << endl;
    cout << "\n\n";

    player = {

    };

    cout << player.height << endl;
    cout << "\n\n";

    Player test_user[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << test_user[0].name << endl;
    cout << test_user[1].name << endl;

    return 0;
}