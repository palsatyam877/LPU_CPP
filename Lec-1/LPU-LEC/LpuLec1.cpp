#include<iostream>
using namespace std;
typedef char i;

float areaOfTriangle(int &b , int h) {
    float area = (b * (float)h) / 2;
    b = 2;

    return area;
}

int main() {
    
    // primitive datan types

    /*
        int 
        float
        char 
        double
        bool
        wchar_t
        void

    */
     
    // cout << "size of int" << endl;
    // cout << sizeof( int ) << endl;

    // cout << "size of wchar_t" << endl;
    // cout << sizeof( wchar_t ) << endl;

    // int a[10]; //
    
    // a[0] = 10;
    // a[1] = 20;
    // a[3] = 30;

    // cout << a[2] << endl;
    
    // int p = 4;
    // int * a = &p;

    // cout << a << endl;
    
    // cout << sizeof( int ) << endl;
 
    // int b = 5 , h = 1;

    // float area = (b * (float)h) / (int)2;

    // cout << area << endl;
    
    // int a = 5;
    // int * b = &a; // ---------

    // (*b) = 20;

    // cout << a << " a" << endl;
    
    // cout << *b << " b" << endl;

    int x = 100 , y = 120;

    float ans = areaOfTriangle(x , y);

    cout << x << endl;

    /*
        int x = 100

        int &b = x;

        b = 2;
    
    */

    // cout << ans << endl;

    return 0;
}