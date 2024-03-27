def checkPalindrome(s: str) -> bool:
    s = s.replace(' ', '').lower()
    return True if s==s[::-1] else False

print(checkPalindrome("rar"))