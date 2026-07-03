class Solution {
    int factorial(int n) {
        if( n == 0 || n == 1) return 1;
        int sum=1;
        
        for(int i = n; i > 0; i--){
            sum *= i;
        }
        return sum;
        
    }
}
