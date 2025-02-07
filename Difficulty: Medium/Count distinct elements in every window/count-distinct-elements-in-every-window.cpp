//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int count = 0;
        vector<int> ans;
        unordered_map<int,int> m ; 
        int n = arr.size();
        for(int i = 0 ; i<k-1;i++){
            if(m.count(arr[i])==0){
                count++;
            }
            m[arr[i]]++;
        }
        
        for(int i = k-1 ; i<n; i++){
            if(m.count(arr[i])==0 || m[arr[i]]==0){
                count++;
            }
            m[arr[i]]++;
            
            ans.push_back(count);
            
            int pi = i-k+1;
            m[arr[pi]]--;
            if(m[arr[pi]] == 0){
                count--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
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
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends