class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequency;
        
        for (int num : arr) {
            frequency[num]++;
        }
       
        unordered_set<int> occurrences;
        for (const auto& entry : frequency) {
            if (occurrences.find(entry.second) != occurrences.end()) {
                return false; 
            }
            occurrences.insert(entry.second);
        }
        
        return true; 
        

        // Method 2
//   unordered_map<int, int> frequency;
        
//         for (int num : arr) {
//             frequency[num]++;
//         }

//         vector<int> ans;
//         unordered_set<int> tans;
        
//          for (const auto& entry : frequency) {
//             ans.push_back(entry.second); 
//             tans.insert(entry.second);  
//         }
        
//        return tans.size() == ans.size();
    }
};