//
//  OEXRegistrationAgreementController.h
//  edXVideoLocker
//
//  Created by Jotiram Bhagat on 19/02/15.
//  Copyright (c) 2015 edX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OEXRegistrationFieldController.h"
#import "OEXRegistrationFormField.h"
@class OEXRegistrationAgreementController;

@protocol OEXRegistrationAgreementControllerDelegate <NSObject>
-(void)agreementViewDidTappedForController:(OEXRegistrationAgreementController *)controller;
@end

@interface OEXRegistrationAgreementController : NSObject<OEXRegistrationFieldController>
-(instancetype)initWithRegistrationFormField:(OEXRegistrationFormField *)field;
@property(nonatomic,weak)id<OEXRegistrationAgreementControllerDelegate>delegate;
@end
