class Solution {
public:
    int smallestNumber(int n, int t) {
        int number = n;

        while (true) {
            int pdt = 1;
            int temp = number;

            while (temp) {
                pdt *= temp % 10;
                temp /= 10;
            }

            if (pdt % t == 0)
                return number;

            number++;
        }
    }
};