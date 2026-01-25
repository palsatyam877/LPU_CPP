#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    /*********** Ques-1 *************/
    // int arr[] = {10, 20, 30};
    // int *ptr = arr;
    // int val = *ptr++;

    // cout << val << " " << *ptr; // 10 20

    /************ Ques-2 *************/
    // int a = 0, b = 5, count = 0;
    // if (a && ++count)
    // {
    //     // Do nothing
    // }
    // if (b || ++count)
    // {
    //     // Do nothing
    // }
    // cout << count; // 0

    /*********** Ques-3 ********/
    // int x = 5, y = 10, z = 15;
    // x = y = z += 5;                    // x = y = z += 5 --> x = y = 20
    // cout << x << " " << y << " " << z; // 20 20 20

    /***********Ques-4 ********/
    // int x = 1, y = 2, z = 3;
    // x += y *= z + 5; // (x += (y *= 8)) // x += 16 // 17 16 3

    // cout << x << " " << y << " " << z << "\n";

    /*
     void print(int *arr, int n)
     {
        for (int i = 0; i < n; i++)
          cout << arr[i] << " ";
        cout << endl;
     }
    */

    /**********Ques-5 ********/
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << arr << endl; // hex
    // cout << &arr[0] << endl; // same hex as above
    // cout << (*arr)++; // 1 if stored in a variable then 2
    // print(arr, 5); // 2 2 3 4 5
    // cout << *(arr + 4) << endl; // 5
    // print(arr, 5); // 2 2 3 4 5
    // cout << *(arr) * *(arr + 3) << endl; // 2 * 4 // 8
    // print(arr, 5); // 2 2 3 4 5
    // cout << ((*(arr + 1))-- + *(arr) * *(arr) ^ 5) << endl; // ((2)-- + 2 * 2 ^ 5) // (2 + 4 ^ 5) // 6 ^ 5 // 110 -> 6
    // // (arr + 1)-- gives error (read Lvalues and Rvalues) // ++a++

    /***********Ques-6*********/
    // int x = 10, y = 50;
    // int *p = &x; // hex add of x
    // int **pp = &p; // hex add of p
    // cout << x << " " << y << endl; // 10 50 C
    // x = 15;
    // cout << x << " " << y << endl; // 15 50 C
    // *p = 20;
    // cout << x << " " << y << endl; // 20 50 C
    // **pp = 25;
    // cout << x << " " << y << endl; // 25 50 C
    // p = &y;
    // cout << x << " " << y << endl; // 25 50 C
    // *p = 55;
    // cout << x << " " << y << endl; // 25 55 C
    // **pp = 60;
    // cout << x << " " << y << endl; // 25 60 C
    // (*p)++;

    // cout << x << " " << y << endl; // 25 61 C
    // (**pp)--;
    // cout << x << " " << y << endl; // 25 60 C
    // p--;
    // cout << p << " " << *p << endl; // hex gar

    // cout << x << " " << y << endl; // 25 60
    // *pp = &x;

    // cout << x << " " << y << endl; // 25 60
    // x = x + **pp + *p; 
    // cout << x << " " << y << endl; // gar
    return 0;
}