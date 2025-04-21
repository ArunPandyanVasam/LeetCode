// Last updated: 21/04/2025, 08:34:30
int maxScore(int* cardPoints, int cardPointsSize, int k) {
    int lSum = 0, rSum = 0, maxSum = 0;
    for (int i = 0; i < k; i++) {
        lSum = lSum + cardPoints[i];
    }

    maxSum = lSum;

    int rIndex = cardPointsSize - 1;

    for (int i = k-1; i >= 0; i--) {
        lSum = lSum - cardPoints[i];
        rSum = rSum + cardPoints[rIndex];
        rIndex = rIndex - 1;
        maxSum = (lSum + rSum) > maxSum? lSum + rSum: maxSum;
    }
    return maxSum;
}