#include <iostream>
#include<vector>
#include <queue>

using namespace std;

int main(){
    int m,n,a;
    cin>>m;
    vector <int> v;
    for(int i=0;i<m;i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>n;
    for(int i=0;i<m-n+1;i++){
         priority_queue<int>pq;
        for(int j=i;j<i+n;j++){
            pq.push(v[j]);
        }
        cout<<pq.top();
        cout<<endl;
    }
    return 0;
}