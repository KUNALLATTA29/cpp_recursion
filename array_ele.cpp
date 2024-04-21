#include <bits/stdc++.h>
using namespace std;
//print elements of array

void rec(int a[], int n, int i)
{
    if(i==n)
    {
        return;
    }
    cout<<a[i]<<" ";
    rec(a, n, i+1);
}
int main(){
    int a[] = {9,5,3,7,8};
    int n = sizeof(a)/sizeof(a[0]);//size of array
    int i = 0;//strating index
    
    rec(a, n, i);
    
    return 0;
}