 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (j >i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int k = j + 1;
                int f = n - 1;
                while (k < f) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[f];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[f]};
                        ans.push_back(temp);
                        k++;
                        f--;
                        while (k < f && nums[k] == nums[k - 1]) {
                            k++;
                        }
                        while (k < f && nums[f] == nums[f + 1]) {
                            f--;
                        }
                    } else if (sum > target) {
                        f--;
                    } else {
                        k++;
                    }
                }
            }
        }
        return ans;
    }