//
//  main.m
//  Badoo
//
//  Created by Narikbi on 17.05.17.
//  Copyright © 2017 app.leetcode.kz. All rights reserved.
//

#import <Foundation/Foundation.h>

//static BOOL isEqualAnagrams(NSString *str1, NSString *str2) {
//
//  NSMutableArray *ch1 = [[NSMutableArray alloc] initWithCapacity:256];
//  NSMutableArray *ch2 = [[NSMutableArray alloc] initWithCapacity:256];
//
//  for (int i = 0; i < 256; i++) {
//    ch1[i] = @0;
//  }
//  for (int i = 0; i < 256; i++) {
//    ch2[i] = @0;
//  }
//  
//  for (int i = 0; i < str1.length; i++) {
//    unichar ch = [str1 characterAtIndex:i];
//    if (ch == ' ') continue;
//    
//    int t = ch - 'a';
//    ch1[t] = @([ch1[t] integerValue] + 1);
//  }
//
//  for (int i = 0; i < str2.length; i++) {
//    unichar ch = [str2 characterAtIndex:i];
//    if (ch == ' ') continue;
//    int t = ch - 'a';
//    ch2[t] = @([ch2[t] integerValue] + 1);
//  }
//
//  for (int i = 0; i < 256; i++) {
//    if ([ch1[i] integerValue] != [ch2[i] integerValue]) {
//      return false;
//    }
//  }
//  
//  return true;
//}
//
//
//static int compare_char(const char *a, const char *b)
//{
//  if (*a > *b) {
//    return 1;
//  } else if (*a < *b) {
//    return -1;
//  } else {
//    return 0;
//  }
//}
//
//@interface NSString (Sorting)
//- (NSString *)stringBySortingCharacters;
//@end
//
//@implementation NSString (Sorting)
//- (NSString *)stringBySortingCharacters
//{
//  const char *s = [self UTF8String];
//  char *s2 = (char *) calloc([self length]+1, 1);
//  if (!s2) return nil;
//  strncpy(s2, s, [self length]);
//  qsort(s2, [self length], 1, compare_char);
//  NSString *ret = [NSString stringWithUTF8String:s2];
//  free(s2);
//  return ret;
//}
//@end

int main(int argc, const char * argv[]) {
  @autoreleasepool {
    
    const int ESCAPE_TOKEN = -128;
    
    
    
    NSArray *numbers = @[@(25626), @(25757), @24367, @24267,  @16, @100, @2, @7277];

    NSMutableArray *res = [NSMutableArray new];
    
    if (numbers.count == 0) return res;
    
    NSNumber *f = numbers[0];
    [res addObject:f];
    
    for (int i = 1; i < numbers.count; i++) {
      NSNumber *prev = numbers[i-1];
      NSNumber *curr = numbers[i];
      NSInteger diff = curr.integerValue-prev.integerValue;
      if (labs(diff) > 127) {
        [res addObject:@(ESCAPE_TOKEN)];
      }
      [res addObject:@(diff)];
    }
    
    NSLog(@"%@", res);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//    NSArray *arr = @[@"pear",
//                     @"amleth",
//                     @"dormitory",
//                     @"tinsel",
//                     @"dirty room",
//                     @"hamlet",
//                     @"listen",
//                     @"silnet"];
    
//    NSMutableArray *res = [NSMutableArray new];
//    NSMutableArray *used = [[NSMutableArray alloc] initWithCapacity:arr.count];
//    
//    for (int i = 0; i < arr.count; i++) {
//      NSString *s1 = arr[i];
//      for (int j = i+1; j < arr.count; j++) {
//        NSString *s2 = arr[j];
//        if (![used containsObject:@(i)] && ![used containsObject:@(j)] && isEqualAnagrams(s1, s2)) {
//          NSString *r = [NSString stringWithFormat:@"%@,%@", s2, s1];
//          [res addObject:r];
//          [used addObject:@(i)];
//          [used addObject:@(j)];
//          break;
//        }
//      }
//    }
//    
//    for (int i = 0; i < arr.count; i++) {
//      if (![used containsObject:@(i)]) {
//        [res addObject:arr[i]];
//      }
//    }
//    
//    NSLog(@"%@", res);
    
//    NSInteger N = 66;
//    NSArray *arr = @[@18,
//                     @11,
//                     @21,
//                     @28,
//                     @31,
//                     @38,
//                     @40,
//                     @55,
//                     @60,
//                     @62];
//    
//    BOOL found = NO;
//    for (NSNumber *x in arr) {
//      NSNumber *diff = @(N -x.integerValue);
//      NSInteger index = [arr indexOfObject:diff];
//      if (index != NSNotFound) {
//        found = YES;
//        break;
//      }
//    }
//    
//    if (found) {
//      NSLog(@"1");
//    } else {
//      NSLog(@"0");
//    }
    
    
    
  }
  
  return 0;
}



