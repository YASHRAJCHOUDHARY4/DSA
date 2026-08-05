class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        if(i > j){
            return ;
        }
        while(j > i){ 
        swap(s[i++], s[j--]);
        }
       
    }
};