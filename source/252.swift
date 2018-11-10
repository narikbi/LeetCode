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
    func canAttendMeetings(_ intervals: [Interval]) -> Bool {
        
        if intervals.count < 2 {
            return true
        }
        
        let sorted = intervals.sorted { (r, l) -> Bool in
            return r.start < l.start || (r.start == l.start && r.end < l.end)
        }

        var cur = sorted[0]
        for (i, element) in sorted.enumerated() {
            cur = element
            if i != sorted.count-1 {
                let next = sorted[i+1]
                if cur.end > next.start {
                    return false
                }
            }
        }
        
        return true
    }
}