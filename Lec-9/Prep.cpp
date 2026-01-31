#include <bits/stdc++.h>
using namespace std;

int main() {
    // Sequental -> Vectors , Stack , Queue , Pair
    // Ordered -> Map , Multimap , Set , Multiset 
    // Unordered -> unordered_map , unordered_set

    // Pair
    
   /* 
    pair<int,int> a = { 1 , 5 }; // pair<int,pair<int,int>>  { 1 , { 4 , 5 } }
    cout << a.first << "\n";
    cout << a.second << "\n";
   */  
    
    /*
    pair<int,pair<int,int>> a = { 1 , { 4 , 5 } };
    cout << a.first << " \n";
    cout << a.second.first << " %\n";
    cout << a.second.second << " %\n";
    */

  /*  
    int n; cin >> n; // 5
    vector<int> a[n];
    int cnt = 1;

    for(int i = 0; i < n; ++i) {
        if(!(i & 1)) {
        //    cout << i << " ^\n"; 
        //    cout <<  a[i].size() << " size : \n";

           for(int j = 1; j <= n; ++j)
              a[i].push_back(j);
        } else {
           for(int j = 1; j <= n - cnt; ++j)
              a[i].push_back(j);               
        }
    }

    for(int i = 0; i < n; ++i) {
       cout << a[i].size() << " size of " << i << "th row \n";  
       for(int j = 0; j < a[i].size(); ++j) {
            cout << a[i][j] << " ";
       }
       cout << '\n';
    }   

   */ 

  /* 
    int h; cin >> h;
    
    vector<pair<int,int>> shelf;

    for(int i = 0; i < h; ++i) {
        pair<int,int> tmp;
        cin >> tmp.first >> tmp.second;
        
        // tmp = {a , b} 
         
        shelf.push_back(tmp);
    }

    for(int i = 0; i < h; ++i) {
        cout << shelf[i].first << " " << shelf[i].second << " : i\n";
    }

    vector<vector<int>> mat(h , vector<int>());

    for(int i = 0; i < h; ++i) {
        pair<int,int> x = shelf[i];
        int sz = shelf[i].first , dir = shelf[i].second;
        
        for(int j = 0; j < sz; ++j) 
           if(dir) // 1
              mat[i].push_back(sz - j);
           else 
              mat[i].push_back(j + 1);   
    } 
  */            

    // print
 /*
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < mat[i].size(); ++j) {
            cout << mat[i][j] << " ";
        } cout << "\n";
    }
 */

    // Nested Containers
    /*
        1. vector<vector<int>>
        2. map<int,vector<int>>
        3. set<pair<int,string>>
        4. vector<map<int,set<int>>>
    */

    // Iterators
    /*
       -> Point to memory address
       -> begin() , end()
       -> vector<int>::iterator it;
       -> continuity for container
    */
    // vector<int> a = { 5 , 4 , 1 , 8 , 5 , 7}; // add++ -> *(add + 1)
    // sort(a.begin() , a.begin() + 2);

    // for(int i = 0; i < a.size(); ++i) 
    //    cout << a[i] << " ";
   
    // cout << *(a.end()  - 1)  << " (\n";  
    // a.begin()++; 
    // int y = 78;

    // auto x = &y;

    // cout << x << " @\n";

    // auto it = a.begin();
    // ++it;

    // cout << *it << " %\n";

    // for(auto it = a.begin(); it != a.end(); ++it) {
    //     cout << *it << " ";
    // }



    // vector<int> a = { 5 , 4 , 1 , 8 , 5 , 7};
    // auto it = a.rbegin();
    // ++it;

    // cout << *it << " $\n";

    // auto it1 = a.rend();

    // cout  << *(it1 - 2) << " #\n";

    /*
    int f() {

    }
    */

    // cout << *a.begin() << " %\n";

     
    vector<int> a = { 5 , 4 , 1 , 8 , 5 , 7};

    // for(auto it = a.rbegin(); it != a.rend(); ++it) {
    //     cout << *it << " ";
    // } cout << "\n";

    // cout << *(a.rend() - 1) << " ^\n";

    // for(auto it = a.rend() - 1; it != (a.rbegin() - 1); --it) {
    //     cout << *it << " ";
    // } cout << "\n";

    // Question 2

    vector<vector<int>> v = {
                              {1 , 2 , 3 , 5} , // -> 0
                              {2 , 1} ,  // -> 1
                              {1} , // -> 2
                              {5, 0 , 1 , 2} , // -> 3
                              {3 , 4 , 7} // -> 4
                            };

    // auto it = *((*(v.begin() + 3)).begin() + 1);
    
    // cout << it << " @\n";

    auto it = v.rbegin();
    it++;
    it++;
    it++;

    cout << (*((*it).rbegin() + 1) ) << " &\n";
    
    // Algorithms
    /*
       sort()

       // will discuss in later classes in detail

       upper_bound()
       lower_bound()
       max_element()
       min_element()
       accumulate()
       reverse()
       count()
       find()
       next_permutation()
       prev_permutation()
    */

    /*
       pair<int,string>
    */

    /*
       vector<pair<int,int>> 

       // Discuss Declaration Nesting related Problems.
       
       vector<int> v[N] // rows fixed and Column Varing

       // Input and printing of above
       
       // vector<vector<int>> // varying height and width

    */
    
    /*
    vector<int> v = { -11 , 15 , 23 , 40};
    vector<int> ::iterator it = v.begin(); // explanation of .begin() and .end() 
    
    cout << (*(it + 400)) << " ^\n"; 

    cout << &it << " %\n";

    // Traverse Loop using above iterators.

    vector<pair<int,int>> v_p = {{1 , 2} , {2 , 3} , {3 , 4}};
       --> itearator
       --> traversal and access


    --> auto keyword and range based loops.    
     
    */



    return 0;
} 