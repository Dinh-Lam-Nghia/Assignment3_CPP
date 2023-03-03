#include<iostream>
using namespace std;

void swapping(int *a, int *b){
    int s = *a;
    *a = *b;
    *b = s;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout<< "Input the value of 1st element :"; cin >> a;
    cout<< "Input the value of 2st element :"; cin >> b;

    cout<< "Output\n";
    cout<< "The value before swapping are : \nelement 1 = " << a << " \nelement 2 = "  << b;

    swapping(&a, &b);
    cout<< "\nThe value after swapping are : \nelement 1 = " << a << " \nelement 2 = "  << b;
    return 0;
}
