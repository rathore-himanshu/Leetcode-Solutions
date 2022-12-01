class Solution {
    bool checkVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;
        return false;
    }
public:
    bool halvesAreAlike(string s) {
        int length = s.size();
        
        int vowelsCountFirst = 0, vowelsCountSecond = 0;
        
        for (int i = 0, j = length/2; i < length/2; i++) {
            
            if ( checkVowel( s[i] ) )
                vowelsCountFirst++;
            
            if ( checkVowel( s[j+i]) )
                vowelsCountSecond++;
                
        }
        
        return vowelsCountFirst == vowelsCountSecond;
    }
};