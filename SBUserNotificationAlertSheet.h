/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIAlertView.h>

@class UIImage;

@interface SBUserNotificationAlertSheet : UIAlertView {
	UIImage* _alertImage;
}
@property(retain, nonatomic) UIImage* alertImage;
-(void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
-(void)layout;
-(void)dealloc;
-(id)_maskedAlertImage;
@end

