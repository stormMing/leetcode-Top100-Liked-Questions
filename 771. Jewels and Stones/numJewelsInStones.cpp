class Solution {
public:
    int numJewelsInStones(string J, string S) {  //o(n^2)
        int i,j,cnt = 0;
        for(i = 0; i < J.length(); i++){
            for(j = 0; j < S.length(); j++){
                if(J[i] == S[j]) 
                    cnt++;
            }
        }
        return cnt;
    }
};
