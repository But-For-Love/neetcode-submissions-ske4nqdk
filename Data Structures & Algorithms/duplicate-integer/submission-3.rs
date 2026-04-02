use std::collections::HashSet;

impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let n = nums.len();
        // 将 Vec 转换为 HashSet
        let set: HashSet<_> = nums.into_iter().collect();
        
        // 如果集合的长度小于原数组长度，说明有重复
        set.len() != n
    }
}