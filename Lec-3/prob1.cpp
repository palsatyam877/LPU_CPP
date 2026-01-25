#include <bits/stdc++.h>
using namespace std;

int main()
{

    /******************* 1st Problem ********************** */

    // int n;
    // cin >> n;

    // for(int i = 0; i < n; ++i) {
    //     for(int j = 0; j <= i; ++j) {
    //        cout << "*";
    //     }
    //     cout << "\n";
    // }

    // for(int i = n; i > 0; --i) {
    //     for(int j = i; j > 0; --j) {
    //         cout << "*";
    //     }

    //     cout << "\n";
    // }

    /************************ 2nd Problem *********************************/
    // int n; cin >> n;

    // int cnt = 1, spaces = n / 2;
    // int spacesDown = 1, cntBase = 0;

    // for (int i = 1; i <= n; ++i)
    // {

    //     if (i <= (n / (int)2) + 1)
    //     {
    //         for (int j = 1; j <= spaces; ++j)
    //         {
    //             cout << " ";
    //         }
    //         spaces--;
    //         for (int j = 1; j <= cnt; ++j)
    //         {

    //             cout << "*";
    //         }

    //         if (i == ((n / (int)2) + 1))
    //         {
    //             cntBase = cnt - 2;
    //         }
    //          cnt += 2;
    //     }
    //     else
    //     {
    //         for (int j = 1; j <= spacesDown; ++j)
    //         {
    //             cout << " ";
    //         }

    //         for (int j = 1; j <= cntBase; ++j)
    //         {
    //             cout << "*";
    //         }
    //         cntBase -= 2;
    //         spacesDown++;

    //     }

    //     cout << "\n";

    //     // cout << cnt << " : cnt " << "\n";
    //     // cout << cntBase << " : cnt " << "\n";
    // }

    /*********************** 3rd Problem******************************/

    // int n;
    // cin >> n;

    // int middleSpaces = (n - 2) * 2 + (int)1;
    // int lastSpace = -1;

    // for(int i = 1; i <= n; ++i) {
    //     for(int j = 1; j <= i; ++j) {
    //         if(j == i || j == 1) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }

    //     for(int j = 0; j < middleSpaces; ++j) {
    //         cout << " ";
    //     }

    //     if(middleSpaces >= 1)
    //        cout << "*";

    //     for(int j = 0; j < lastSpace; ++j) {
    //         cout << " ";
    //     }
    //     if(lastSpace >= 0)
    //          cout << "*";
    //     lastSpace++;

    //     cout << "\n";

    //     middleSpaces -= 2;
    // }

    /***********************4th Problem****************************/

    // int n; cin >> n;
    // int spaces = n - (int)1;

    // for(int i = 1; i <= n; ++i) {
    //     for(int j = 1; j <= spaces; ++j) {
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= i; ++j)
    //        cout << j;

    //     for(int j = i - 1; j >= 1; --j)
    //        cout << j;
    //     cout << "\n";

    //     spaces--;
    // }

    /************************ 5th Problem *******************************/

    int n; cin >> n;
    int mid = (n / 2) + 1;
    int cnt = mid - 1;

    for(int i = 1; i <= n; ++i) {
       if(i <= mid) {
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
        if(i != mid)
           cout << " ";
        else
           cout << "*";
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
       }
       else {
         for(int j = 1; j <= cnt; ++j) {
            cout << "*";
         }
         cout << " ";
         for(int j = 1; j <= cnt; ++j) {
            cout << "*";
         }
         cnt--;
       }

        cout <<"\n";
    }

    /***************************  6th Problem **********************************/

    // int n;
    // cin >> n;

    // int space = n - 1, middleSpace = -1;

    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= space; ++j)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != (n / 2) + 1)
    //     {
    //         for (int j = 1; j <= middleSpace; ++j)
    //         {
    //             cout << " ";
    //         }
    //     } else {
    //         for(int j = 1; j <= n - 2; ++j) 
    //           cout << "*";
    //     }
    //     if (middleSpace != -1)
    //         cout << "*";

    //     cout << "\n";
    //     space--;
    //     middleSpace += 2;
    // }

    return 0;
}
