

class Solution {
    static boolean armstrongNumber(int n) {
       
        int org = n;
        int newNum = 0;
        
        while(n > 0){
            int rem = n%10;
            newNum =  newNum + rem * rem * rem ;
            n /=10;
        }
        
        return newNum == org;
    }
}