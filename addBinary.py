class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a,b= int(a,2) , int(b,2) ; a=a+b ; return (bin(a)[2:])
