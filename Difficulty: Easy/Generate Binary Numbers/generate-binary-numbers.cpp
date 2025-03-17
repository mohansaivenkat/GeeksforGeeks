//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n) {
    // Your code here
    vector<string> v;
    
        for (int i = 1; i <= n; i++) {
            string bin = "";
            int copy=i;
            while (copy > 0) {
                    int bit = copy%2;
                    bin.push_back('0' + bit);
                    copy /= 2;
                }
  
    
            reverse(bin.begin(), bin.end());
            
            v.push_back(bin);
            
        }
        
    return v;
}



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends