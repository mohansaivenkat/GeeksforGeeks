//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int i=0;
        int zeroes=-1;
        int twos=arr.size();
        
        while(i<twos){
            if(arr[i]==0){
                swap(arr[i],arr[zeroes+1]);
                zeroes++;
                i++;
            }
            else if(arr[i]==1){
                i++;
            }
            else{
                swap(arr[i],arr[twos-1]);
                twos--;
            }
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends