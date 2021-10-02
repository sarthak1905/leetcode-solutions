class Solution:
    def romanToInt(self, s: str) -> int:
        d = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        s+=','
        r1 = 0
        rs = 0
        m = []
        f = False
        for i in range(len(s)-1):
            if s[i] == s[i+1]:
                r1 += d[s[i]]
                f = True
            else:
                if f:
                    m.append(r1+d[s[i]])
                    r1 = 0
                    f = False
                else:
                    m.append(d[s[i]])
        m.append(0)
        for i in range(len(m)-1):
            if m[i] < m[i+1]:
                rs -= m[i]
            else:
                rs += m[i]
        return rs