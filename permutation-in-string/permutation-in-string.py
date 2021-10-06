class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1_map = {}
        s1_count = 0
        for letter in s1:
            s1_count += 1
            if letter in s1_map:
                s1_map[letter] += 1
            else:
                s1_map[letter] = 1
        
        s2_map = {}
        start = 0
        for i in range(len(s2)):  
            if s2[i] in s1_map:
                if not bool(s2_map):
                    start = i
                
                if s2[i] in s2_map:
                    s2_map[s2[i]] += 1
                
                else:
                    s2_map[s2[i]] = 1
                
                if i - start + 1 == s1_count:
                    if s1_map == s2_map:
                        return True
                    
                    else:
                        s2_map[s2[start]] -= 1
                        if s2_map[s2[start]] == 0:
                            s2_map.pop(s2[start], None)
                        start += 1
            else:
                s2_map.clear()
            
        
        return False