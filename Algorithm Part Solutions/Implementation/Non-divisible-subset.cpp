#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main() {
    ll n,k;
    cin>>n>>k;
    ll a[k],m=0,c=1;
    for(ll i=0;i<=k-1;i++) 
        a[i]=0;
    for(ll i=0;i<n;i++){
        ll b; 
        cin>>b;
        b=b%k;
        a[b]++;
    }
    for(ll i=1;i<=k-1;i++) 
        m+=a[i];
    ll o=1;
    for(ll i=1,j=k-1;i<=k/2;i++,j--){ 
        //cout<<i<<" "<<j<<" ";
        if(i==j){
            if(a[i]!=0) 
                m-=a[i];
            m++;
        }
        else{ 
            if(a[i]!=0&&a[j]!=0)
            {   c=min(a[i],a[j]);
                m-=c;
            }
        }
    }
    if(m==0) 
        o=1;
    else{
        if(a[0]!=0)
            o=m+1;
        else 
            o=m;
    }
    cout<<o;
    return 0;
}
