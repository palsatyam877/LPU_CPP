#include<bits/stdc++.h>
using namespace std;


void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    // comments in c++.

    // Data types in c++
    /*
       1. Basic Data Types
       2. Derived Data Types
       3. User Defined Data Types
    */

    /*
        1. Basic Data Types
          --> 
        int , char , bool , float , void , 
         4     1      1      4       1

        1.A -> sizeof() 
        
        2. Derived Data Types
          --> 
        array , pointers , reference , functions
        
        3. User Defined Data Types
          --> 
        class , structure , union , typedef , using 
        
        // (Later) Data type modifiers ( long , unsigned , long long)
    */

    // scopes

    /*
    
    int x = 0;
    {
        int x = 5;
        
        {
            {
                int x = 10;
                // cout << x << "\n";
            }
            cout << x << " ^^\n";
        }
        
        // int x = 40;
        // int z = 23;
        {
            // int y = 20;
            // int x = 28;
            int x = 20;
            {
                // int z = 4;
                // int y = 80;
                {
                    // int x = 123;
                    cout << x << " \n";
                }
            }

            cout << x << " ##\n";
        }
    }

    */   
    

    // nested if else logic 
    
    // explain.
    /*
    int score = 85;
    int bonus = 10;

    if (score > 90) {
        cout << "Alpha";
    } else if (score > 70) {
        if (bonus >= 10) {
            score += 5;
            if (score > 90) {
                cout << "Beta";
            } else {
                cout << "Gamma";
            }
        } else {
            cout << "Delta";
        }
    } else if (score > 80) {
        // This block is mathematically true, but will it run?
        cout << "Epsilon";
    } else {
        cout << "Zeta";
    }

    */
   
    // references in c++
   
    /*
       operators in c++

       1. Arithmetic
       + , - , / , * , % ,
       ++ , --

       3. Logical
       && , || ,  !

       4. Bitwise
       & , | , ^ , >> , << , ~

       5. Assignment
       = , += , -= , *= , /= 

       6. Ternary or Conditional Operator
       ? :
       
       7. sizeof , & , casting , 
       
       // Problems
       
       1.Which operator has the highest precedence?  
         + 
         -
         == 
         &&
       
       2.What does the following code output?

        int x = 4;
        x *= 2 + 3;
        cout << x;  
       
       3. Which of the following is the correct associativity of the assignment operator (=)?
    */

    

    /*********** Ques-1 *************/
    // int arr[] = {62 , 56, 30};
    // int *ptr = arr;
    // int val = (*ptr)++;

    // cout << val << " " << *ptr; // 

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
    // x = y = z += 5;              
    // cout << x << " " << y << " " << z; // 20 20 20

    /***********Ques-4 ********/
    // int x = 1, y = 2, z = 3;
    // x += y *= z + 5;

    // cout << x << " " << y << " " << z << "\n";

    /**********Ques-5 ********/
   
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << arr << endl; 
    // cout << &arr[0] << endl;
    // cout << (*arr)++  << endl;
    // print(arr, 5);
    // cout << *(arr + 4) << endl; 
    // print(arr, 5);
    // cout << *(arr) * *(arr + 3) << endl; 
    // print(arr, 5); 
    // cout << ((*(arr + 1))-- + *(arr) * *(arr) ^ 5) << endl; 
    // (arr + 1)-- gives error (read Lvalues and Rvalues) //
     

    /***********Ques-6*********/

   /*
    int x = 10, y = 50;
    int *p = &x;
    int **pp = &p;
    cout << x << " " << y << endl; // 10 50
    x = 15;
    cout << x << " " << y << endl; 
    *p = 20;
    cout << x << " " << y << endl;
    **pp = 25;
    cout << x << " " << y << endl;
    p = &y;
    cout << x << " " << y << endl;
    *p = 55;
    cout << x << " " << y << endl; // 25 55
    **pp = 60;
    cout << x << " " << y << endl; // 
    (*p)++;

    cout << x << " " << y << endl;
    (**pp)--;

    cout << x << " " << y << endl;
    p--;
    cout << p << " " << *p << endl;

    cout << x << " " << y << endl;
    *pp = &x;

    cout << x << " " << y << endl;
    x = x + **pp + *p; 
    cout << x << " " << y << endl;  
  */   
   
    /*
      arr 
      1D
      2D

      for() tradional
      for_each()
      for(auto &it : V)
    */

    // int x = 10;
    
    // {
    //     // int x = 56;
    //     cout << x << " %\n";
    // }

    // cout << x << " %\n";

    int a = 2 , b = 3;
    cout << a << " " << b << " ^\n";
    swap(a , b);
    cout << a << " " << b << " ^\n";

    return 0;
}