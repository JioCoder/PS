#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    // 1. 중복을 제거하여 실제 존재하는 폰켓몬 종류의 수 구하기
    unordered_set<int> pokemon_types(nums.begin(), nums.end());
    
    // 2. 최대 선택할 수 있는 마릿수 (N/2)
    int max_pick = nums.size() / 2;
    
    // 3. 종류의 수와 선택 가능한 마릿수 중 더 작은 값 반환
    return min((int)pokemon_types.size(), max_pick);
}