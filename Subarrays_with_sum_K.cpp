#include <bits/stdc++.h>
using namespace std;

int findSubArraySum(int Arr[], int N, int target)
{
    // code here
    unordered_map<int, int> m;
    int count = 0;
    int psum = 0 ;
    
    for(int i = 0; i < N; i++){
        psum += Arr[i];
        
        if(psum == target){
            count++;
        }
        
        if(m.find(psum-target) != m.end()){
            count += m[psum-target];
        }
        
        m[psum]++;
    }
    
    return count;
}

int main(){
    int n, target;
    cin>>n;
    int Arr[n];
    for(int i = 0; i < n; i++){
        cin>>Arr[i];
    }
    cin>>target;
    int ans = findSubArraySum(Arr, n, target);
    cout<<ans;

    return 0;
} 