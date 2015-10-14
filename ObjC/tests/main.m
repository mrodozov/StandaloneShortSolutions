#import <objc/objc.h>
#import <objc/Object.h>
#import <Foundation/Foundation.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSURL.h>
#import <Foundation/NSURLConnection.h>
#import "MyPerson.h"

int main (int argc, char * argv[]){
  
  NSAutoreleasePool* pool = [[NSAutoreleasePool alloc] init];
  
  MyNewPerson* matze = [[[MyNewPerson alloc] init] autorelease];
  
  matze.firstName =  @"Miro";
  matze.middleName = @"Nikolaev";
  matze.secondName = @"Rodozov";
  
  NSString * aname= [[[NSString alloc] init] autorelease];
  aname = @"Sviro";
  
  [matze setFirstName:aname];
  
  [matze.self printDetails];
  [matze printDetails];
  
    
  [pool drain];
  return 0;
  
}



