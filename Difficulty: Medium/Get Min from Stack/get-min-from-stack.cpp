//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> st;
    stack<int> minst;

    Solution() {
        // Constructor (no need for initialization)
    }

    // Add an element to the top of Stack
    void push(int val) {
        st.push_back(val);
        if (minst.empty() || minst.top() >= val) {
            minst.push(val);
        }
    }

    // Remove the top element from the Stack
    void pop() {
        if (!st.empty()) {
            if (st.back() == minst.top()) {
                minst.pop();
            }
            st.pop_back();
        }
    }

    // Returns top element of the Stack
    int peek() {
        return st.empty() ? -1 : st.back();
    }

    // Finds minimum element of Stack
    int getMin() {
        return minst.empty() ? -1 : minst.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends