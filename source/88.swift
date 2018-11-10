class Solution {
    func merge(_ a: inout [Int], _ m: Int, _ b: [Int], _ n: Int) {
                
        var i = m-1
        var j = n-1
        var k = n+m-1
        
        while i >= 0 && j >= 0 {
            
            if a[i] > b[j] {                
                a[k] = a[i]
                i -= 1
            } else {
                a[k] = b[j]
                j -= 1
            }
            k -= 1
        }
        
        while j >= 0 {
            a[k] = b[j]
            k -= 1
            j -= 1
        }
        
    }
}