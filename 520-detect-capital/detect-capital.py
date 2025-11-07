class Solution(object):
    def detectCapitalUse(self, word):
        """
        :type word: str
        :rtype: bool
        """
        u = word.upper()
        l = word.lower()
        c = l.capitalize()
        if word == u:
            return True
        elif word == l:
            return True
        elif word == c:
            return True
        else:
            return False