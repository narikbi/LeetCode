//: Playground - noun: a place where people can play

import UIKit

var str = "Hello, playground"


import Foundation

// read data from file
let currentDirectory = FileManager.default.currentDirectoryPath
let filePath = (currentDirectory as NSString).appendingPathComponent("algo1-programming_prob-2sum.txt")

let data: NSString?
do {
  data = try NSString(contentsOf: URL(fileURLWithPath: filePath), encoding: String.Encoding.utf8.rawValue)
}
catch {
  data = nil
}

var numbers = [Int]()
var targets = NSMutableSet()

// fill dictionary with numbers from file data
if data != nil {
  let lines = data!.components(separatedBy: "\n")
  
  for line in lines {
    if line.characters.count > 0 && line != "\n" {
      if let number = Int(line) {
        numbers.append(number)
      }
    }
  }
}

// sort array
numbers.sort()

// add all verified targets
var leftIndex = 0
var rightIndex = numbers.count - 1
var rightLast = false
while leftIndex < rightIndex {
  var sum = numbers[leftIndex] + numbers[rightIndex]
  
  if sum < -10000 {
    leftIndex += 1
    rightLast = false
  } else if sum > 10000 {
    rightIndex -= 1
    rightLast = true
  } else {
    if rightLast {
      var tempIndex = leftIndex
      while sum < 10001 {
        targets.add(sum)
        tempIndex += 1
        sum = numbers[tempIndex] + numbers[rightIndex]
      }
      rightIndex -= 1
    } else {
      var tempIndex = rightIndex
      while sum > -10001 {
        targets.add(sum)
        tempIndex -= 1
        sum = numbers[leftIndex] + numbers[tempIndex]
      }
      leftIndex += 1
    }
  }
}

print(targets.allObjects.count)

