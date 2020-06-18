/********************************************************************************
*                                                                               *
*        Author     : Rezoan Shakil Prince                                      *
*        Batch      : 14                                                        *
*        Email      : prince.cuet.77@gmail.com                                  *
*        University : Chittagong University of Engineering and Technology       *
*                                                                               *
********************************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll;

void solve() {  
        ll a, b, n; 
        cin >> a >> b >> n; 

        ll mx = max(a, b);
        ll mn = min(a, b);
        ll cnt = 0;
        while ( 1 ) {
                if ( mx > n || mn > n ) 
                        break;
                        
                mn += mx;
                swap(mn, mx);
                cnt++;
        }

        cout << cnt << endl; 
}

int main()
{
        IOS;

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
