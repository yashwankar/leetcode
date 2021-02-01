class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;
        while(n!=0){
            n = (n&(n-1));
            c++;
        }
        return c;
    }
};

/*
Learnings: 

n & (n-1) sets the least significant 1 bit to 0.
i.e. from 1011 to 1010 to 1000 to 0000
*/