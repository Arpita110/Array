/***
Input: s = "baabb"
Output: 2
Explanation: "baabb" -> "b" -> "". 
Remove palindromic subsequence "baab" then "b".

int removePalindromeSub(string s) {
      int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return 2;
            }
            else
                i++;
            j--;
        }
        return 1;
    }
