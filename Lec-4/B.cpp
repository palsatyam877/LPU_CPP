













#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() { int j = 3; 
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl; // hex -> add of index 0 
    cout << &arr[0] << endl; // same as above /___________  arr => 0 add++ 
    cout << (*arr)++ << endl;
    print(arr, 5); 
    cout << *(arr + 4) << endl; 
    print(arr, 5); 
    cout << *(arr) * *(arr + 3) << endl; // 2 * 4 
    print(arr, 5);
    cout << ((*(arr + 1))-- + *(arr) * *(arr) ^ 5) << endl; 
    // (arr + 1)-- gives error (read Lvalues and Rvalues) 


    //  int a = 5;
    //  int * p = &a;
    //  int **pp = &p;

    //  cout << **pp << " &\n";

    //  int j = 7;
    //  ++j;
    //  ++7;

    //  cout << j << "\n";

    //  cout << pp << "\n";

    // int arr[5] = {21 , 2 , 3 , 4 , 5};

    //  cout << (arr)++ << "\n";
    //  cout << *arr << "\n";

    // int * jj = arr;
    // ++jj;

    // cout << jj << " add of jj \n";
    // cout << *jj << " val of jj\n";

    // cout << (arr + 3) << " add \n";
    // cout << *(arr + 3) << " val\n";
    
    // int a = 5;
    // int * p = &a;
    // int **p1 = &p;

    // p1 -> p -> a => 5
    // 8 + 8 + 2*3


    // int a = 7 , b = 8;
    // p--;
    // p++;

    // cout << **p1 << " val\n";
    
    /************************Pointers Questions****************************/
   
    // int x = 10, y = 50;
    // int *p = &x; 
    // int **pp = &p; 
    // cout << x << " " << y << endl; 
    // x = 15;
    // cout << x << " " << y << endl;
    // *p = 20;
    // cout << x << " " << y << endl;
    // **pp = 25;
    // cout << x << " " << y << endl;
    // p = &y;
    // cout << x << " " << y << endl;
    // *p = 55;
    // cout << x << " " << y << endl;
    // **pp = 60;
    // cout << x << " " << y << endl; 
    // int z = ++(*p);
    // cout << x << " " << z << "\n";

    // cout << x << " " << y << endl;
    // (**pp)--;
    // cout << x << " " << y << endl;
    // p--;
    // cout << p << " " << *p << endl; 

    // cout << x << " " << y << endl;
    // *pp = &x;

    // cout << x << " " << y << endl;
    // x = x + **pp + *p; 
    // cout << x << " " << y << endl; 


    /******************************************/
    //  [1 , 3 , 7 , 2 , 6]

    //  sz => 10^5 / 10^6

    // int arr[6] = {1 , 2 , 3 , 4 , 5 , 6}; // 

    // arr++;

    // arr[0] --> *(arr + 0) --> *(0 + arr)

    // arr[4] --> *(arr + 4) => 
    // int _q = 7;
    // int * p = &_q;
    // p[7]; // p and p[1]

    // cout << p << " " << p[7] << " add diff\n";

    // cout << sizeof(arr) << "\n";

    /********************************************************************/

    return 0;
}