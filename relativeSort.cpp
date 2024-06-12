class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0; i < arr1.size(); i++){
            mp[arr1[i]]++;
        }
        for(int i = 0; i < arr2.size(); i++){
            int freq = mp[arr2[i]];
            while(freq--){
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }
        map<int,int> m;
        for(auto &pair: mp){
            if(pair.second > 0){
                m[pair.first] = pair.second;
                // cout<<pair.first<<" "<<pair.second<<"\n";
            }
        }
        for(auto &pair: m){
            int freq = pair.second;
            while(freq--){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};
    
    vector<int> result = sol.relativeSortArray(arr1, arr2);
    
    cout << "Sorted array: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}