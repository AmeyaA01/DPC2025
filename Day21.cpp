#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int>& st, int x) {
    if (st.empty()) { st.push(x); return; }
    int y = st.top(); st.pop();
    insertAtBottom(st, x);
    st.push(y);
}
void reverseStack(stack<int>& st) {
    if (st.empty()) return;
    int x = st.top(); st.pop();
    reverseStack(st);
    insertAtBottom(st, x);
}
void printBottomToTop(stack<int>& st, bool& first) {
    if (st.empty()) return;
    int x = st.top(); st.pop();
    printBottomToTop(st, first);
    if (!first) cout << ", ";
    cout << x;
    first = false;
    st.push(x);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    stack<int> st;
    for (int i = 0; i < n; ++i) {
        long long v;
        cin >> v;
        st.push((int)v);
    }

    reverseStack(st);

    cout << "[";
    bool first = true;
    printBottomToTop(st, first);
    cout << "]\n";
    return 0;
}
