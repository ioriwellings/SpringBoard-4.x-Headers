/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFlippyAlertItem.h"
#import "UIAlertViewDelegate.h"

@class MPAudioDeviceController;

@interface SBNowPlayingAlertItem : SBFlippyAlertItem <UIAlertViewDelegate> {
	unsigned _beganSeeking : 1;
	unsigned _deferLayout : 1;
	unsigned _needsLayout : 1;
	MPAudioDeviceController* _audioDeviceController;
}
-(id)init;
-(void)dealloc;
-(id)newCenteredLabel:(BOOL)label;
-(void)_updateLabelWithTag:(int)tag text:(id)text faded:(BOOL)faded cursor:(float*)cursor sheet:(id)sheet;
-(void)updateInformation;
-(id)_newButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
-(Class)frontAlertSheetClass;
-(Class)backAlertSheetClass;
-(id)newFrontAlertSheet;
-(id)newBackAlertSheet;
-(void)willActivate;
-(void)willDeactivateForReason:(int)reason;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)dismissOnLock;
-(BOOL)dismissOnAlertActivation;
-(void)configureFront:(BOOL)front requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;
-(void)willPresentAlertView:(id)view;
-(void)didPresentAlertView:(id)view;
-(void)_playPauseButtonAction:(id)action;
-(void)_changeTrackButtonDown:(id)down;
-(void)_changeTrackButtonUp:(id)up;
-(void)_changeTrackButtonEndSeek:(id)seek;
-(void)_changeTrackButtonTouchPause:(id)pause;
-(void)_volumeChange:(id)change;
-(void)_registerForNowPlayingNotifications;
-(void)_unregisterForNowPlayingNotifications;
-(void)_registerForVolumeNotifications;
-(void)_unregisterForVolumeNotifications;
-(void)_nowPlayingChanged:(id)changed;
-(void)_systemVolumeChanged:(id)changed;
-(void)_registerForMuteNotifications;
-(void)_unregisterForMuteNotifications;
-(void)_systemMuteStatusChanged:(id)changed;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)audioDeviceControllerMediaServerDied:(id)died;
@end

