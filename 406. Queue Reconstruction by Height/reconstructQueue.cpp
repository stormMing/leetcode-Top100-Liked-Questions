class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        if(people.size() == 0) return {};
        auto cmp = [](pair<int,int>a,pair<int,int> b){
            return a.first == b.first ? a.second < b.second : a.first > b.first;
        };
        sort(people.begin(),people.end(),cmp);
        vector<pair<int,int>> ret;
        for(auto val : people){
            ret.insert(ret.begin() + val.second,val);
        }
        return ret;
    }
};
