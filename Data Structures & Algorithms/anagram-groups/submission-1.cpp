class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::array<char, 26>, std::vector<std::string>> groups;

		for (auto str: strs) {
			std::array<char, 26> letters{};
			for (auto& c: str) {
				letters[c - 'a']++;
			}
			groups[letters].push_back(str);
		}
		
		std::vector<std::vector<std::string>> ret;
		for (auto [_, val]: groups) {
			ret.push_back(val);
		}

		return ret;

    }
};
