// Problem : https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k , d , w , cost = 0;
    cin >> k >> d >> w ;
    
    for (int i = 1 ; i <= w ; i++ ){
        cost += (i*k);
    }
    
    if( cost - d  <= 0){
        cout << 0 ;
}    else {
        cout << cost-d ;
}
    return 0;
}
