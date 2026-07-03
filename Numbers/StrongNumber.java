class Solution {
    public boolean isStrong(int n) {
        // code here
        int fact(int n){
            return fact(n-1) * fact(n-2);
        }
        int number = 0;
        int org = n;
        
        while( n > 0){
            int rem = n%10;
            int number = fact(rem);
            n /=10;
        }
        
        return org == number;
    }
}