//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        queue<int> q;
        vector<int> ans;
        for(int i =0;i<k-1;i++){
            if(arr[i]<0){
                q.push(arr[i]);
            }
        }
        
        for(int i = k-1 ; i<n ; i++){
            if(arr[i]<0){
                q.push(arr[i]);
            }
            
            if(q.size()==0) ans.push_back(0);
            else ans.push_back(q.front());
            
            int pi = i-k+1;
            
            if(arr[pi]<0){
                q.pop();
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends