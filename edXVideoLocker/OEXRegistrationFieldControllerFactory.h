//
//  OEXRegistrationFieldControllerFactory.h
//  edXVideoLocker
//
//  Created by Jotiram Bhagat on 13/02/15.
//  Copyright (c) 2015 edX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OEXRegistrationFormField.h"
#import "OEXRegistrationFieldController.h"


@interface OEXRegistrationFieldControllerFactory : NSObject

+( id <OEXRegistrationFieldController>)registrationFieldViewController:(OEXRegistrationFormField *)registrationField;

@end
