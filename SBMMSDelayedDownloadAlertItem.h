/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBMMSDelayedDownloadAlertItem : SBAlertItem {
	NSString* _fromAddress;
	int _messageCount;
}
-(void)dealloc;
-(void)setMessage:(id)message;
-(void)setMessageCount:(int)count;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_showNetworkPrefs;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end

