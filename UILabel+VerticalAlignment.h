#import <UIKit/UIKit.h>

// Vertical Alignment Values
typedef NS_ENUM(NSInteger, UITextVerticalAlignment) {
  UITextVerticalAlignmentTop = 0,
  UITextVerticalAlignmentMiddle,
  UITextVerticalAlignmentBottom
};

@interface UILabel(VerticalAlignment)

// Getter
-(UITextVerticalAlignment)textVerticalAlignment;

// Setter
-(void)setTextVerticalAlignment:(UITextVerticalAlignment)textVerticalAlignment;

@end