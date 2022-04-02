#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t,k=1 ;
    cin >> t ;
    while(k<=t){
        int n;
        cin >> n ;
        int g1[n] ;
        int a,ans = 0 ;
        for(int i=0;i<n;i++)
        {
          cin>>a;
          g1[i]=a;
        }
        sort(g1,g1+n);
        for (int i = 0; i < n; i++)
            if (ans + 1 <= g1[i]){
                ans++;
            }
        cout<< "Case #"<< k <<": " << ans << " " << "\n";
        k++;
    }
    return 0;
}
