class Solution {
public:
    int findComplement(int num) {

        
        if(num==0){
            return 1;
        }
        int rem = 0;
        int ans = 0;
       long long int mul = 1;


        while(num){
            rem = num%2;

            rem = rem^1;

            num = num/2;

// if(ans>INT_MAX/10 || ans<INT_MIN/10)

// return 0;

            ans = ans+rem*mul;

            mul = mul*2;


        }
   return ans;

    }
};