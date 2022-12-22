#include<iostream>
using namespace std;
namespace ajinkya{
    int val = 4555666;
    int get_val()
    {
        return val * 10;
    }
}
int main()
{
    int val = 45;
    cout << val << endl;
    cout << ajinkya::val << endl;
    cout << ajinkya::get_val() << endl;
}