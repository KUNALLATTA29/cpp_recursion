#include <bits/stdc++.h>
using namespace std;
//print number upto given limit (Decreasing order)

void rec(int n)
{
    if(n==0)
    {
        return;
    }
    
    cout<<n<<" ";
    
    rec(n-1);
    
    
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    
    rec(n);
    
    return 0;
}