class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return 0;
        }
        int rem = 0;

        int num = x;

        int ans = 0;

        while(num){
            rem = num%10;

            num = num/10;

             if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return 0;
        

            ans = ans*10+rem;

           
        }

         if(x == ans){
            return 1;
        }

        else{
            return 0;
        }
    }
};