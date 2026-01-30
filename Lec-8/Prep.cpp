#include <bits/stdc++.h>
using namespace std;

// Code for Square root of a number

int squareRoot(int n) {
    // for(int i = 2; i <= n / 2; ++i) {
	// 	if(i * i == n) 
	// 	   return i;
	// } // Okish 

	for(int i = 2; i*i <= n; ++i) {
         if(n == i*i) 
		    return i;
	}

	return -1;
}

int isPrime(int x) {
    
}

int main() {

/*	
    int h , r; cin >> h >> r;

	// int x; 

	// x = 5;

   vector<vector<char>> mat;

   mat.assign(h + 1 , vector<char>(((2 * h) - 1) * r , ' '));
   int offset = 0;

for(int rep = 0; rep < r; ++rep) {   
   int spaces = h - 1 , stars = 1;
   int currCol = offset;

   for(int rows = 0; rows < h; ++rows) {
	  for(int j = 0; j < spaces; ++j) {
		   ++currCol;
	  }

      // 
	  for(int j = 0; j < 2 * (rows + 1) -1; ++j) {
		  mat[rows][currCol++] = '*';
	  }

	  spaces--;
	  currCol = offset;
	  // 
   }
   offset += ((2 * h) - 1);
}  
   
   for(int i = 0; i < h; ++i) {
	  for(int j = 0; j < (((2 * h) - 1) * r); ++j) {
	       cout << mat[i][j]; 
		  
	  } cout << "\n";
   }

*/

    // int N = 1000 , cnt = 0;
    // for (int i = N; i > 0; i >>= 1)
    // {
    //     // cout << i << endl;
	// 	++cnt;
    // }

	// cout << cnt << " ^\n";
   
	// Analyse

    // for (int i = N; i > 0; i >>= 1)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    // Analyse

    // int n = 45;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //         cout << i << endl;
    // }

	// Analyse
    
	// Code for Square root of a number

	cout << squareRoot(33) << "\n";
    
	// Analyse

	// Code for isPrime (Normal)

	// Analyse

    // Code for Sieve of Erothaneousis
    // int n = 10246;
    // int primes[n + 1];
    // for (int i = 0; i <= n; i++)
    //     primes[i] = true;

    // primes[0] = false;
    // primes[1] = false;
    // for (int i = 2; i <= n; i++)
    // {
    //     if (primes[i])
    //     {
    //         // cout << i << " is prime" << endl;
    //         for (int j = i * i; j <= n; j += i)
    //             primes[j] = false;
    //         // for (int k = 2; k <= n; k++)
    //         // {
    //         //     cout << k << ":" << primes[k] << ";";
    //         // }
    //         // cout << endl;
    //     }
    // }

    // Analyse

    // int x = n;
    // for (int i = 2; i <= n; i++)
    // {
    //     int count = 0;
    //     if (!primes[i])
    //         continue;
    //     while (x % i == 0)
    //     {
    //         x /= i;
    //         count++;
    //     }
    //     if (count > 0)
    //         cout << i << " " << count << endl;
    // }

	// Analyse
    return 0;
    // 420 2, 5, 3 7
}