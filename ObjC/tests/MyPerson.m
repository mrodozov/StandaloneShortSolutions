// usage of our header file

#import "MyPerson.h"

@implementation MyPerson

// getter/setter

@synthesize firstName ;
@synthesize secondName ;

// the actual method

- (void) printDetails {

  // write out the name, in a formated way:
  
  NSLog(@"%@, %@", self.secondName, self.firstName);

}

@end

@implementation MyNewPerson

@synthesize middleName ;

- (void) printDetails {
  
  NSLog(@"%@, %@, %@", self.secondName, self.firstName, self.middleName);
  
}

@end
