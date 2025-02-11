//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
bool compare(pair<int,int> a, pair<int,int> b ){
        return (double)a.first/a.second > (double)b.first/b.second ; 
    }
class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // Your code here
        vector<pair<int,int>> val_wt;
        int n = val.size();
        for(int i=0;i<n;i++){
            val_wt.push_back({val[i],wt[i]});
        }
        sort(val_wt.begin(),val_wt.end(),compare);
        double ans=0;
        for(int i=0 ; i<n ; i++){
            if(val_wt[i].second<=capacity){
                capacity -= val_wt[i].second;
                ans += val_wt[i].first;
                if(capacity == 0){
                    return ans;
                }
            }
            else{
                ans += ((double)val_wt[i].first/(double)val_wt[i].second)*capacity;
                capacity=0;
                if(capacity == 0){
                    return ans;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends