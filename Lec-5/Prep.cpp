#include <bits/stdc++.h>
using namespace std;

void f(int arr[])
{
}

int main()
{

    // Traversing of for loops -----> (I)
    /*
         normal for loop
         for_each
         range_based (auto it)
    */

    // sizeof arr and decay in pointers ----> (II)

    int arr[3][4] = {{1, 2, 3, 4}, {5, 16, 7, 8}, {9, 10, 11, 12}};

    // cout << *(arr + 1) << " & \n";
    // cout << *(*(arr + 1) + 1) << " **\n";

    // cout<< *(arr[0] + 5) << " $\n";

    // int a[3] = { 0 , 1 , 2 };
    // cout << *(a + 1) << " % \n";

    // Spiral Problem // same height and width

    /*
      int n;
      cin >> n; // length

      int *x[n];
      int **mat = x;

      for (int i = 0; i < n; ++i)
      {
          x[i] = new int[n];
      }

      int topLi = 0, topLj = 0;
      int topRi = 0, topRj = n - 1;
      int bottomLi = n - 1, bottomLj = n -1;
      int bottomRi = n - 1, bottomRj = 0;
      int globalCounter = 0;
      int length = n;

      n--;

      while (n >= 0)
      {
          int TempTopLi = topLi, TemptopLj = topLj;
          int TempTopRi = topRi, TemptopRj = topRj;
          int TempBottomLi = bottomLi, TempBottomLj = bottomLj;
          int TempBottomRi = bottomRi, TempBottomRj = bottomRj;

          // topLeft
          for (int j = 0; j < n; ++j)
          {
              mat[TempTopLi][TemptopLj] = ++globalCounter;
              ++TemptopLj;
          }

          // TopRight
          for (int i = 0; i < n; ++i)
          {
              mat[TempTopRi][TemptopRj] = ++globalCounter;
              TempTopRi++;
          }

          // BottomLeft
          for (int j = 0; j < n; ++j)
          {
              mat[TempBottomLi][TempBottomLj] = ++globalCounter;
              TempBottomLj--;
          }

          // BottomRight
          for (int i = 0; i < n; ++i)
          {
              mat[TempBottomRi][TempBottomRj] = ++globalCounter;
              TempBottomRi--;
          }

          n -= 2;

          topLi++;
          topLj++;

          topRi++;
          topRj--;

          bottomLi--;
          bottomLj--;

          bottomRi--;
          bottomRj++;

          // for (int i = 0; i < length; ++i)
          //     for (int j = 0; j < length; ++j)
          //         cout << mat[i][j] << " \n"[j == length - 1];
                  // break;
      }

      for (int i = 0; i < length; ++i)
          for (int j = 0; j < length; ++j) {
              if(mat[i][j] < 10) {
                 cout << mat[i][j] << "  ";
              } else {
                 cout << mat[i][j] << " ";
              }

              if(j == length - 1)
                  cout << "\n";
          }

    */

/*
    int SomeFunction (int x, int y)
    {
      if ((x==1) || (y==1)) return 1;
      if (x==y) return x;
      if (x > y) return SomeFunction(x-y, y);
      if (y > x) return SomeFunction (x, y-x);

    }
    The value returned by SomeFunction (15, 255) is __________ .
*/

    return 0;
}

// [] --> subscript operator

// https://leetcode.com/problems/plus-one/submissions/1897875826/?envType=problem-list-v2&envId=array
// https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=array
/*
    int missingNumber(vector<int>& nums) {
        sort( nums.begin() , nums.end());

        int n = nums.size();

        for(int i = 0; i < n; ++i) {
            if(nums[i] != i) 
                return i; 
        }

        return n;
    }

*/

// https://leetcode.com/problems/majority-element/description/?envType=problem-list-v2&envId=array

/*
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int mid = (n / 2);  // floor( n / 2 ) 
        return nums[mid];
    }
*/

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1897917779/?envType=problem-list-v2&envId=array
// ( explain them min() and max function and reimpliment the above function )

/*
    int maxProfit(vector<int>& prices) {
         int mnn = prices[0] , maxProfit = 0;

         for(int i = 1; i < prices.size(); ++i) {
             int profit = prices[i] - mnn;

             if(profit > maxProfit) {
                maxProfit = profit;
             }

             if(mnn > prices[i]) 
                mnn = prices[i];
         }

         return maxProfit;
    }
*/

// https://leetcode.com/problems/merge-sorted-array/submissions/1897929256/?envType=problem-list-v2&envId=array

/*
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int inx = 0;
        for(int i = m; i <= m + n - 1; ++i) 
            nums1[i] = nums2[inx++];
        
        sort(nums1.begin() , nums1.end());
    }
*/

// https://leetcode.com/problems/move-zeroes/description/?envType=problem-list-v2&envId=array
/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int inxL = 0 , inxR = 0;
        int sz = nums.size();

        for(int i = 0; i < sz; ++i) {
            if(nums[inxR]) {
                int temp = nums[inxL];
                nums[inxL] = nums[inxR];
                nums[inxR] = temp;

                inxL++;
            }

            inxR++;
        }
    }
};
*/
// https://leetcode.com/problems/third-maximum-number/?envType=problem-list-v2&envId=array
/*
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int sz = nums.size();
        int cnt = 1;

        for(int i = sz - 1; i > 0; --i) {
            // int i = sz - 1;
            if(nums[i] != nums[i - 1]) {
                ++cnt;
                if(cnt == 3) 
                    return nums[i - 1];
            }
        }

        return nums[sz - 1];
    }
};
*/

// https://leetcode.com/problems/intersection-of-two-arrays/submissions/1897973791/?envType=problem-list-v2&envId=array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=array
// https://leetcode.com/problems/pascals-triangle-ii/description/?envType=problem-list-v2&envId=array

// (Will think) https://leetcode.com/problems/pascals-triangle/?envType=problem-list-v2&envId=array
// (Try) https://leetcode.com/problems/spiral-matrix/      ----> 
// https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=array (Binary Search)
    