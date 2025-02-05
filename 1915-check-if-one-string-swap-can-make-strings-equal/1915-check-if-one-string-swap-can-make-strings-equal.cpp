class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
           if (s1 == s2) return true;  // Already equal, no swap needed.

    vector<int> diffIndices;  // Stores indices where s1 and s2 differ.

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            diffIndices.push_back(i);
        }
    }

    // If there are not exactly two differences, return false.
    if (diffIndices.size() != 2) return false;

    // Check if swapping the two different characters makes the strings equal.
    int i = diffIndices[0], j = diffIndices[1];
    swap(s1[i], s1[j]);

    return s1 == s2;
        
    }
};