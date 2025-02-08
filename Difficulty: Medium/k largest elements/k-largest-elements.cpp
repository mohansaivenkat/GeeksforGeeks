//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i : arr){
            if(pq.size()<k){
                pq.push(i);
            }
            else{
                pq.push(i);
                pq.pop();
            }
        }
        
        vector<int> ans;
        while(pq.size()){
            ans.push_back(pq.top());
            pq.pop();
            
        }
        reverse(ans.begin(),ans.end());
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
        vector<int> ans = ob.kLargest(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends