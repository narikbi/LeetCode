import UIKit

 public class Interval {
   public var start: Int
   public var end: Int
   public init(_ start: Int, _ end: Int) {
     self.start = start
     self.end = end
   }
 }

class Solution {
    func minMeetingRooms(_ intervals: [Interval]) -> Int {
        
        let starts = intervals.map { $0.start }.sorted()
        let ends   = intervals.map { $0.end }.sorted()
        
        var count = 0, i = 0, j = 0, res = 0
        
        while i < starts.count && j < ends.count {
            
            if starts[i] < ends[j] {
                i += 1
                count += 1
            } else {
                j += 1
                count -= 1
            }
            
            res = max(res, count)
        }
        
        return res
    }
}
