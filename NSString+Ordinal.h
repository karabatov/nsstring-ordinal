//
//  NSString+Ordinal.h
//
//  Created by Yuri Karabatov
//

@import Foundation;

/**
 Category to turn ordinal numbers into words.
 */
@interface NSString (Ordinal)

/**
 @brief Turn input number into ordinal string representation.
 @discussion Returns Russian string representation.

 @param ordinal Input number to turn into string.
 @return Ordinal number as string.
 */
+ (NSString *)ordinalRepresentationWithNumber:(NSInteger)ordinal;

@end
