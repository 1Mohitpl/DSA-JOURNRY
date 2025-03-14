int trap(vector<int>& height) {
    int n = height.size();
    int trapwater = 0;

    for (int i = 0; i < n; i++) {
        int leftmax = 0;
        int rightmax = 0;

        for (int j = 0; j <=i; j++) {
            leftmax = max(leftmax, height[j]);
        }
        int j = i;
        while (j < n) {
            rightmax = max(rightmax, height[j]);
            j++;
        }
        trapwater += min(leftmax, rightmax) - height[i];
    }
    return trapwater;
}