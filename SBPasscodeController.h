/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class SBPasscodeComplianceAlertItem, SBPasscodeAlertItem, NSString, NSDate;

@interface SBPasscodeController : NSObject {
	SBPasscodeAlertItem* _passcodeAlertItem;
	int _mode;
	NSString* _previousPasscode;
	NSString* _newPasscode;
	int _unlockScreenType;
	SBPasscodeComplianceAlertItem* _complianceAlertItem;
	NSDate* _forcedComplianceDate;
}
+(id)sharedInstance;
-(void)dealloc;
-(void)forceUserToChangePasscode;
-(void)_passwordEntered:(id)entered;
-(void)_userWantsToComplyNow:(BOOL)complyNow;
-(void)_abort;
-(void)_didEndCall;
-(void)_startListeningToTelephonyNotifications;
-(void)_stopListeningToTelephonyNotifications;
-(void)checkPasscodeCompliance;
@end

