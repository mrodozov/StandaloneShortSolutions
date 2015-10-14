#import <Foundation/Foundation.h>

@interface MyPerson : NSObject {
  
  NSString* firstName;
  NSString* secondName;
  
}

// getter and setter

@property (nonatomic, copy) NSString* firstName;
@property (nonatomic, copy) NSString* secondName;  

// should print the complete name
- (void) printDetails;

@end

//trying the super and self keywords with new class

@interface MyNewPerson : MyPerson {
  NSString * middleName;
}

@property (nonatomic, copy) NSString* middleName;

			    - (void) printDetails;

@end
