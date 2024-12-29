vector<int> nge(vector<int>& arr, int n) {
    vector<int> nse(n, n); // Initialize with `n` for elements with no NSE.
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        nse[i] = st.empty() ? n : st.top();
        st.push(i);
    }

    return nse;
}

vector<int> psee(vector<int>& arr, int n) {
    vector<int> pse(n, -1); // Initialize with `-1` for elements with no PSE.
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            st.pop();
        }
        pse[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }

    return pse;
}

int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    vector<int> nextSmaller = nge(arr, n);
    vector<int> prevSmaller = psee(arr, n);

    long long sum = 0;
    int mod = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        int left = i - prevSmaller[i];
        int right = nextSmaller[i] - i;

        long long totalContribution = (long long)arr[i] * left * right;
        sum = (sum + totalContribution) % mod;
    }

    return sum;
}