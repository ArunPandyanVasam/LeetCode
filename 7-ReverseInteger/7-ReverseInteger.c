// Last updated: 23/04/2025, 07:23:17
int reverse(int x) {
    int reverseNumber = 0;

    while (x != 0) {
        int digit = x % 10;

        if (reverseNumber > INT_MAX / 10 || 
           (reverseNumber == INT_MAX / 10 && digit > 7)) return 0;

        if (reverseNumber < INT_MIN / 10 || 
           (reverseNumber == INT_MIN / 10 && digit < -8)) return 0;

        reverseNumber = reverseNumber * 10 + digit;
        x /= 10;
    }

    return reverseNumber;
}