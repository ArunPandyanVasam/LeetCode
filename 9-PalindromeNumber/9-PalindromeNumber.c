// Last updated: 23/04/2025, 06:52:13
bool isPalindrome(int x) {

    if (x < 0) {
        return false;
    }

    int reverseNumber = 0;
    int n = x;

    while (n > 0) {
        int lastDigit = n%10;
        if (reverseNumber > INT_MAX/10 || reverseNumber == INT_MAX/10 && lastDigit > 7) {
            return false;
        }
        reverseNumber = (reverseNumber*10)+lastDigit;
        n = n/10;
    }

    return x == reverseNumber;

}