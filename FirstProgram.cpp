#include <iostream>

using namespace std;

int main()
{   
    string str;
    cout << "Enter your name : ";
    cin>>str;
    // it reads only one word 
    getline(cin,str);
    cout << "Hello " << str << endl;
    return 0;
}
