#include <bits/stdc++.h>
using namespace std;
#define _cin ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{   _cin;
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {   int R,C,r,c,flag=0,final=0;
        cin>>R>>C;
        char G[R][C];
        for(int j=0;j<R;j++)
            for(int k=0;k<C;k++)
                cin>>G[j][k];
        cin>>r>>c;
        char P[r][c];
        for(int j=0;j<r;j++)
            for(int k=0;k<c;k++)
                cin>>P[j][k];
        
        int i, j, k;
        for(i =0;i<R;i++)
        {   for(j =0;j<C;j++)
            {   if(P[0][0] == G[i][j])
                {   flag = 1;
                    if(C-j>=c)
                    {   for(int q =1;q<r;q++)   
                        {   if(flag == 0)   
                                break;
                            for(int w =0;w<c;w++)
                            {   if(P[q][w] == G[q+i][w+j])
                                {   if(q == r-1&&w == c-1)
                                        final=1;
                                    flag=1;
                                }
                                else
                                {   flag =0;
                                    break;
                                }    
                            }    
                        }
                    }
                }
            }
        }
        if(final)    cout<<"YES\n";
        else         cout<<"NO\n";
    }
 return 0;
}
