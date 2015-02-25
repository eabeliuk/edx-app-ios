//
//  OEXRegistrationFieldController.h
//  edXVideoLocker
//
//  Created by Jotiram Bhagat on 13/02/15.
//  Copyright (c) 2015 edX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OEXRegistrationFormField.h"
@protocol OEXRegistrationFieldController<NSObject>

-(UIView *)view;

-(id )currentValue;

-(BOOL)hasValue;

-(OEXRegistrationFormField *)field;

-(void)handleError:(NSString *)errorMsg;

-(BOOL)isValidInput;

@end
