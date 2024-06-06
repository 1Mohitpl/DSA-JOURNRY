bool isNStraightHand(vector<int>& hand, int groupSize) {
       int n = hand.size();
    if (n % groupSize != 0) {
        return false; // If hand size is not divisible by groupSize, return false immediately.
    }

    map<int, int> cardCount;
    for (int &pickNumber : hand) {
        cardCount[pickNumber]++;
    }

    while (!cardCount.empty()) {
        int curr = cardCount.begin()->first;
        for (int i = 0; i < groupSize; i++) {
            if (cardCount[curr + i] == 0) {
                return false; // If there are not enough consecutive cards, return false.
            }

            cardCount[curr + i]--;
            if (cardCount[curr + i] == 0) {
                cardCount.erase(curr + i);
            }
        }
    }
    return true; // If all cards are arranged successfully into groups, return true.