//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        // code here
        if(nums.empty()){
            return 0;
        }

        int index = 1;
        int n = nums.size();
        for(int i = 1 ; i<n ; i++){
            if(nums[i]!=nums[i-1]){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
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
        Solution ob;
        int ans = ob.removeDuplicates(arr);
        for (int i = 0; i < ans; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends