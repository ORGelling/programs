#include <iostream>
#include <string>

using namespace std;

//struct Return                           // Comment here
//{
//    int first;
//    double second;
//    string third;
//};

//Return fun()
//{
//    return Return{ 1, 12.5, "string" };
//}

//Return &fun2()
//{
//    static Return ret{ 4, 5, "string" };
//    return ret;
//}

int main()
{
    //auto [one, two, three] = fun();
    //auto &&[rone, rtwo, rthree] = fun();
    //auto &[lone, ltwo, lthree] = fun2();
    //auto const &[lone1, ltwo1, lthree1] = Return{ 3, 7, "String3" };
    //auto &&[lone2, ltwo2, lthree2] = Return{ 4, 5, "string" };
    //cout << lone << '\n';
    //cout << ltwo1 << '\n';
    //cout << lthree2 << '\n';
    char arrayName[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    for (size_t idx = 0; auto const &element: arrayName)
        cout << idx++ << ": " << element << '\n';
} 
