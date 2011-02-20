/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "UITextFieldDelegate.h"
#import "SpringBoard-Structs.h"


@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {
	int _mode;
	int _unlockScreenType;
	BOOL _hasEmergencyCall;
}
-(id)initWithPasscodeMode:(int)passcodeMode unlockScreenType:(int)type;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)returnKeyPressed:(id)pressed;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)shouldShowInLockScreen;
-(void)dismiss:(int)dismiss;
-(void)_setErrorString:(id)string;
-(void)didEndCall;
@end

