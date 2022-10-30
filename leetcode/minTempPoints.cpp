#include <bits/stdc++.h>
using namespace std;

 int oddCells(int n, int m, vector<vector<int>>& ind) 
    {
        vector<int>row(n,0);
        vector<int>col(m,0);
        for(int i=0;i<ind.size();i++)
        {
            row[ind[i][0]]++;
            col[ind[i][1]]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<row[i]+col[j]<<"\t";
                if((row[i]+col[j])%2==1)
                {
                    count++;
                }
            }
            cout<<endl;
        }

        return count;
    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> ind = {{2,1},{1,2}};

    cout<<oddCells(3,4,ind);
}
