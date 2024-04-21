#include <bits/stdc++.h>
using namespace std;
//print number upto given limit (Increasing order)

void rec(int n)
{
    if(n==0)
    {
        return;
    }
    
    
    rec(n-1);
    
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    
    rec(n);
    
    return 0;
}