vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp; // pair of nums2 and nextgreater element
    stack<int> st;
    st.push(-1); // initially push -1
    for (int i = nums2.size() - 1; i >= 0; i--) {
        int curr = nums2[i];

        while( st.top()!=-1  && st.top() <= curr){
                    st.pop();
     }

         mp[nums2[i]] =  st.top(); 
        st.push(curr);
    }

    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++) {
        ans.push_back(mp[nums1[i]]);
    }
    return ans;
}