bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int day) {
    int bouquets = 0;
    int flowers = 0;

    for (int bloom : bloomDay) {
        if (bloom <= day) {
            flowers++;
            if (flowers == k) {
                bouquets++;
                flowers = 0;
            }
        } else {
            flowers = 0;
        }
        if (bouquets >= m) {
            return true;
        }
    }

    return false;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    int n = bloomDay.size();

    // If the total number of flowers needed is more than the available flowers
    if ((long long)m * k > n) return -1;

    int left = *min_element(bloomDay.begin(), bloomDay.end());
    int right = *max_element(bloomDay.begin(), bloomDay.end());

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canMakeBouquets(bloomDay, m, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}