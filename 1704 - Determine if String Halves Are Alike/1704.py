class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        int length = len(s)
        vowels = ['a','e','i','o','u']
        vowelsCountFirst = len([vowel for char in s[:length//2] if char in vowels])
        vowelsCountSecond = len([vowel for char in s[length//2:] if char in vowels])
        return vowelsCountFirst == vowelsCountSecond