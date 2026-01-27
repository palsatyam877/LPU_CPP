#include <bits/stdc++.h>
using namespace std;

void f(int x)
{
    if ((x & 1) == 0)
        cout << x << " ";
}

void mystery(int *ptra, int *ptrb)
{
    // int *temp;
    // temp = ptrb;
    // ptrb = ptra;
    // ptra = temp;

    int tmp = *ptrb;
    *ptrb = *ptra;
    *ptra = tmp;
}

// void fun(int &x , int y) {
//    ++x;
//    ++y;
// }

void f(vector<int> b) {
   //
   b[3] = 21;
}

void f1(vector<int> &b) {
   //
   b[3] = 21;
}


int main()
{
   
    // int b = 7;
    // fun(b  , 8);
    // cout << b << "\n";
    
    vector<int> v(13 , 7);

    for(auto &it : v) {
        cout << it << " ";
    } cout << "\n";

    f(v);

    for(auto &it : v) {
        cout << it << " ";
    } cout << "\n";   
    f1(v);
    for(auto &it : v) {
        cout << it << " ";
    } cout << "\n";    

    // int a[3] = {121 , 5, 7};

    // cout << a << " && \n";
    // cout << *a << " *& \n";
    // cout << a[2] << " %\n"; // -> *(a + 2)

    // cout << *(a + 2) << " " << *(2 + a) << " !#\n";

    // int p = 4;

    // int * q = &p;
    // int ** r = &q;

    // cout << **r << " $\n";

    // int b[4][7] = {
    //    { 71 , 2 , 3 , 6  , 4  , 10 , 13},
    //    { 122 , 32 , 366 , 6  , 4  , 10 , 13},
    //    { 311 , 2122 , 3333 , 126  , 564  , 3110 , 13},
    //    { 1555 , 5642 , 3563 , 346  , 784  , 10 , 13},
    // };

    // cout << b << " ^\n"; // add hex
    // cout << *b << " #\n"; //
    // cout << **b << " @@\n"; //

    // cout << **((b + 2) + 3) << " ((\n"; // --> **(b + 5)
    // cout << *(        *(b + 2)  + 3         ) << " ___\n";

    // cout << *(*(b + 3) + 2) << " !!!\n";
    // cout << *(*(b + 2) + 4) << " ~~~\n";

    // cout << b[2][3] << " @\n";
    // cout << b[2][0] << " ++\n";

    /****************Spiral Problem***************** */

    /*
      int n;
      cin >> n;

      int matrix[9][9];

      int topLefti = 0, topLeftj = 0;
      int topRighti = 0, topRightj = n - 1;
      int bottomRighti = n - 1, bottomRightj = n - 1;
      int bottomLefti = n - 1, bottomLeftj = 0;

      int length = n - 1;
      int counter = 0;

      while (length >= 0)
      {
          int TemptopLefti = topLefti, TemptopLeftj = topLeftj;
          int TemptopRighti = topRighti, TemptopRightj = topRightj;
          int TempbottomRighti = bottomRighti, TempbottomRightj = bottomRighti;
          int TempbottomLefti = bottomLefti, TempbottomLeftj = bottomLeftj;

          if(length == 0) {
              matrix[TemptopLefti][TemptopLeftj] = ++counter;
              break;
          }

          // topLeft loop
          for(int i = 0; i < length; ++i) {
              matrix[TemptopLefti][TemptopLeftj] = ++counter;
              TemptopLeftj++;
          }

          // topRight
          for(int j = 0; j < length; ++j) {
              matrix[TemptopRighti][TemptopRightj] = ++counter;
              TemptopRighti++;
          }

          // bottom Right

          for(int i = 0; i < length; ++i) {
              matrix[TempbottomRighti][TempbottomRightj] = ++counter;
              TempbottomRightj--;
          }

          // bottomLeft

          for(int j = 0; j < length; ++j) {
              matrix[TempbottomLefti][TempbottomLeftj] = ++counter;
              TempbottomLefti--;
          }

          topLefti++;
          topLeftj++;

          topRighti++;
          topRightj--;

          bottomRighti--;
          bottomRightj--;

          bottomLefti--;
          bottomLeftj++;

          length -= 2;
      }

      for(int i =-0; i < n; ++i) {
          for(int j = 0; j < n; ++j) {
              if(abs(matrix[i][j]) > 100)
                  matrix[i][j] = 0;

              if(matrix[i][j] < 10)
                 cout << matrix[i][j] << "  ";
              else
                 cout << matrix[i][j] << " ";

              if(j == n - 1)
                  cout << "\n";
          }
      }

    /*
    int a[7] = {3 , 5 ,  1 ,  2 , 7 , 6 , 8};
    int n = sizeof(a) / sizeof(int);

    cout << n << " $\n";

    cout << sizeof(a[0]) << " %\n";

    int * p = a;
    cout << p << " ^\n";
    cout << a << " @\n";

    cout << sizeof(a) << " ^\n";
    cout << sizeof(p) << " !!\n";

    // Traversal of Loops

  //   for(int i = 0; i < n; ++i)
  //      cout << a[i] << " ";

    for_each(a , a + 7 , f);

      now

    */

    // function overloading;

    // int &a , int &b

    // int _b[4][5] = {
    //     {5, 4, 3},
    //     {15, 41, 13},
    //     {52, 24, 32},
    //     {53, 34, 36},
    // };

    // cout << *(*(_b + 2) + 5) << " ^\n";

    //  int a[6]; //

    //  vector<int> a;

    //  cout << a.size() << " &\n";

    //  vector<int> a(6 , 5);

    //  cout << a.size() << " &\n";

    // vector<int> a;

    // int sz = a.size();

    // for (int i = 0; i < sz; ++i)
    //     cout << a[i] << " ";

    // cout << "\n";

    // a.push_back(6);

    // sz = a.size();

    // for (int i = 0; i < sz; ++i)
    //     cout << a[i] << " ";

    // cout << " ^\n";

    // a.push_back(16);
    // a.push_back(61);
    // a.push_back(26);
    // a.push_back(65);
    // a.push_back(86);
    // a.push_back(76);

    // sz = a.size();

    // cout << sz << " &\n";

    // for (int i = 0; i < sz; ++i)
    //     cout << a[i] << " ";

    // cout << " ^\n";

    // int a = 2016, b = 0, c = 4, d = 42;
    // mystery(&a, &b);

    // vector<int> a(7 , 12);

    // cout << a.size() << " ^\n";

    // a.pop_back();
    // a.pop_back();

    // cout << a.size() << " $\n";

    int a = 5;
    int b = a; 
    b++;

    cout << a << " " << b << "\n";

    int c = 8;
    int &d = c;
    d++;
    cout << c << " " << d << " %\n";

    // cout << a << " " << b << "\n";
}

// int SomeFunction (int x, int y)
// {
//   if ((x==1) || (y==1)) return 1;
//   if (x==y) return x;
//   if (x > y) return SomeFunction(x-y, y);
//   if (y > x) return SomeFunction (x, y-x);

// }
// The value returned by SomeFunction (15, 255) is __________ .

/*

int main()
{

    if (a < c)
     mystery(&c, &a);
    mystery(&a, &d);

   cout << a << "\n";
}

*/