/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSDictionary, UIImage, NSString, AVController, NSTimer;

@interface SBUserNotificationAlert : SBAlertItem {
	unsigned _replyPort;
	int _token;
	int _timeout;
	unsigned _requestFlags;
	NSString* _alertHeader;
	id _alertMessage;
	NSString* _alertMessageDelimiter;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _soundPath;
	NSDictionary* _avControllerAttributes;
	NSDictionary* _avItemAttributes;
	double _soundRepeatDuration;
	NSTimer* _soundStopTimer;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	id _textFieldButtonDisplayDefaultButtonURLs;
	id _textFieldButtonImagePaths;
	id _textFieldTitles;
	id _textFieldValues;
	id _textFieldButtonDisplayTitles;
	id _textFieldButtonDisplayDefaultButtonTitles;
	int _currentTextFieldButtonDisplayIndex;
	double _creationTime;
	int _defaultButtonTag;
	unsigned _replyFlags;
	int _defaultButtonIndex;
	int _alternateButtonIndex;
	int _otherButtonIndex;
	unsigned _cancel : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _hideButtonsInAwayView : 1;
	unsigned _dismissOnLock : 1;
	unsigned _dontDismissOnUnlock : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _oneButtonPerLine : 1;
	unsigned _groupsTextFields : 1;
	UIImage* _alertImage;
	AVController* _avController;
}
-(id)_safeLocalizedValue:(id)value withBundle:(id)bundle;
-(id)initWithMessage:(id)message replyPort:(unsigned)port requestFlags:(int)flags;
-(void)dealloc;
-(Class)alertSheetClass;
-(int)token;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)willActivate;
-(void)stopSound;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)wakeup;
-(void)cancel;
-(void)_setSheetDefaultButtonTitle:(id)title;
-(void)_textFieldButtonPressed:(id)pressed;
-(void)_sendResponse:(int)response;
-(BOOL)_needsDismissalWithClickedButtonIndex:(int)clickedButtonIndex;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)noteVolumeOrLockPressed;
-(void)willDeactivateForReason:(int)reason;
-(void)didDeactivateForReason:(int)reason;
@end

