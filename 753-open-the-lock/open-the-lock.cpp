class Solution {
public:
    int openLock(vector<string>& deadends, string target) {

        unordered_map<char, char> nextslot = {
            {'0','1'}, {'1','2'}, {'2','3'}, {'3','4'}, {'4','5'},
            {'5','6'}, {'6','7'}, {'7','8'}, {'8','9'}, {'9','0'}
        };

        unordered_map<char, char> prevslot = {
            {'0','9'}, {'1','0'}, {'2','1'}, {'3','2'}, {'4','3'},
            {'5','4'}, {'6','5'}, {'7','6'}, {'8','7'}, {'9','8'}
        };

        queue<string> q;

        unordered_set<string> visited(deadends.begin(), deadends.end());

        int turns = 0;

        if (visited.find("0000") != visited.end()) {
            return -1;
        }

        q.push("0000");
        visited.insert("0000");

        while (!q.empty()) {

            int level_size = q.size();

            while (level_size--) {

                string cur_comb = q.front();
                q.pop();

                if (cur_comb == target) {
                    return turns;
                }

                for (int wheel = 0; wheel < 4; wheel++) {

                    // Rotate the wheel forward
                    string new_comb = cur_comb;
                    new_comb[wheel] = nextslot[new_comb[wheel]];

                    if (visited.find(new_comb) == visited.end()) {
                        q.push(new_comb);
                        visited.insert(new_comb);
                    }

                    // generate the new combination by turning the wheel to the next direction..


//if the new comb. is not a dead end and was never visited..
// add it to the queue and mark it as visited...

                    // Rotate the wheel backward
                    new_comb = cur_comb;
                    new_comb[wheel] = prevslot[new_comb[wheel]];

                    if (visited.find(new_comb) == visited.end()) {
                        q.push(new_comb);
                        visited.insert(new_comb);
                    }
                }
            }

            turns++;
        }

        return -1;
    }
};