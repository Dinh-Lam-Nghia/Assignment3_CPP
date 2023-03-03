#include<iostream>
using namespace std;

int sum(int *ar, int n, int &s, int i){
    s += ar[i];
    i++;
    if(i >= n) {return -1;}
    sum(ar, n, s, i);
    return 0;
}
int nhapmang(int *ar, int n, int i){
    cout<< "element - " << i+1 << ": "; cin >> ar[i];
    i++;
    if(i >= n) {return -1;}
    nhapmang(ar, n, i);
    
    return 0;
}

int main(int argc, char const *argv[])
{
    int n, s= 0, i = 0;
    cout<< "Input the number of elements to store in the array (max 10) :"; cin >> n;
    int ar[n];
    nhapmang(ar, n, i);
    sum(ar, n, s, i); 
    cout << "Expected Output :\n The sum of array is : " << s; 
    return 0;
}
