class Solution {
public:
void backtrack(string &digits,vector<string>&result,string &ans,int idx){
   vector<string>keypad = {
    "_",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};
    if(idx==digits.length()){
        result.push_back(ans);
        return;
    }
    int digit=digits[idx]-'0';
    string letters=keypad[digit];

    for(int i=0;i<letters.size();i++){
        ans.push_back(letters[i]);
        backtrack(digits,result,ans,idx+1);
        ans.pop_back();
    }

}
    vector<string> letterCombinations(string digits) {
    vector<string>result;
    string ans="";
    int idx=0;
    backtrack(digits,result,ans,idx);
    return result;    
    }
};