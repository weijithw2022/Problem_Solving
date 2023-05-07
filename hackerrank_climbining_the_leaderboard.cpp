vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    int m = player.size();
    set<int,greater<int>> uniqueValues(ranked.begin(), ranked.end());
    int n = uniqueValues.size();
    int currentRank = n+1;
    vector <int> rank;
    int j = 0;
    set<int,greater<int>> :: reverse_iterator itr;
    itr = uniqueValues.rbegin();
    while(j<m){
        while(itr != uniqueValues.rend() && *itr<=player.at(j)){
            currentRank--;
            itr++;
        }
        rank.push_back(currentRank);
        j++;
    }
    return rank;
}
