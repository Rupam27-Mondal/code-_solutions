class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> set = new HashSet<>();

        while (n != 1 && !set.contains(n)) {
            set.add(n);

            int newNum = 0;

            while (n > 0) {
                int rem = n % 10;
                newNum += rem * rem;
                n /= 10;
            }

            n = newNum;
        }

        return n == 1;
    }
}
