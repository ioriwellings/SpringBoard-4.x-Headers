/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class SBAwayModel, SBAwayView, NSTimer, NSMutableDictionary, NSDictionary, NSString, NSMutableArray, SBUIController, PCPersistentTimer, NSDate, SBSlidingAlertDisplay, SBAlertItem, NSNumber, NSTimeZone;

@interface SBAwayController : SBAlert {
	SBUIController* _uiController;
	SBAwayModel* _model;
	SBAwayView* _awayView;
	NSTimer* _dimTimer;
	unsigned _isLocked : 1;
	unsigned _isUnlocking : 1;
	unsigned _isDeviceLocked : 1;
	unsigned _isDeviceLockedInitialized : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _isPermanentlyBlocked : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _appRequestedPasscodeEntry : 1;
	unsigned _isSyncing : 1;
	unsigned _relockAfterUnlock : 1;
	unsigned _wasLockedOrMakingEmergencyCallBeforeSync : 1;
	unsigned _wasDeviceLockedBeforeSync : 1;
	unsigned _showOverheatUI : 1;
	unsigned _performingAutoUnlock : 1;
	unsigned _springBoardIdleTimerScheduled : 1;
	unsigned _validPhotoCountCheck : 1;
	unsigned _nowPlayingAppIsThirdParty : 1;
	NSDictionary* _nowPlayingInfo;
	NSNumber* _iPodNowPlayingPID;
	BOOL _iPodIsPlaying;
	SBSlidingAlertDisplay* _deviceUnlockDisplay;
	double _deviceLockBlockTime;
	double _lastLockWallTime;
	NSTimeZone* _lastLockTimeZone;
	double _lastLockSecondsSinceBoot;
	PCPersistentTimer* _deviceLockTimer;
	BOOL _devicePasscodeLoaded;
	NSString* _devicePasscode;
	BOOL _chargingViewHasFadedOut;
	NSMutableArray* _pendingAlertItems;
	SBAlertItem* _currentAlertItem;
	NSMutableDictionary* _awayViewPluginControllers;
	NSString* _alwaysFullscreenAwayPluginName;
	PCPersistentTimer* _smsSoundWakeTimers[2];
	int _gracePeriodWhenLocked;
}
@property(assign, nonatomic) BOOL chargingViewHasFadedOut;
@property(readonly, assign) NSDate* lastLockDate;
+(id)sharedAwayController;
+(id)sharedAwayControllerIfExists;
+(void)registerForAlerts;
-(id)initWithUIController:(id)uicontroller;
-(id)awayModel;
-(CGRect)alertWindowRect;
-(float)finalAlpha;
-(BOOL)undimsDisplay;
-(id)awayView;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)alertDisplayWillBecomeVisible;
-(void)_releaseAwayView;
-(void)reactivatePendingAlertItems;
-(void)playLockSound;
-(void)_sendLockStateChangedNotification;
-(BOOL)showOverheatUI;
-(void)setShowOverheatUI:(BOOL)ui;
-(void)_pendAlertItem:(id)item;
-(void)lock;
-(id)pendingAlertItems;
-(void)_unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
-(void)screensaverDidFadeToBlack:(id)screensaver finished:(id)finished context:(void*)context;
-(void)unlockWithSound:(BOOL)sound alertDisplay:(id)display isAutoUnlock:(BOOL)unlock;
-(void)unlockWithSound:(BOOL)sound alertDisplay:(id)display;
-(void)unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
-(void)unlockWithSound:(BOOL)sound;
-(BOOL)isPasswordProtected;
-(void)activationChanged:(id)changed;
-(BOOL)isDeviceLockedOrBlocked;
-(void)setDeviceLocked:(BOOL)locked;
-(int)_getGracePeriod;
-(void)_markLockTime;
-(BOOL)_shouldLockDeviceWithCurrentGracePeriod:(int)currentGracePeriod;
-(void)_updateDeviceLockedState;
-(void)clearDeviceLockedTimer;
-(void)applicationRequestedDeviceUnlock;
-(void)cancelApplicationRequestedDeviceLockEntry;
-(void)_clearBlockedState;
-(BOOL)isBlocked;
-(BOOL)isPermanentlyBlocked:(double*)blocked;
-(void)noteSyncStateChanged;
-(BOOL)isSyncing;
-(BOOL)allowsIdleDimming;
-(double)idleDimDuration;
-(void)noteSpringBoardIdleTimerScheduled:(BOOL)scheduled;
-(void)noteResetRestoreStateChanged;
-(BOOL)isLocked;
-(BOOL)shouldShowLockStatusBarTime;
-(void)_photoLibraryChanged;
-(BOOL)deviceHasPhotos;
-(BOOL)hasPhotosDevicesAttached;
-(BOOL)shouldShowSlideshowButton;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)resetAwayItemsAndMark:(BOOL)mark;
-(void)frontLockedAnimationFinished;
-(BOOL)shouldAnimateOtherDisplaysSuspension;
-(BOOL)shouldAnimateOtherDisplaysResumption;
-(void)printLockLog;
-(void)frontLocked:(BOOL)locked withAnimation:(int)animation automatically:(BOOL)automatically disableLockSound:(BOOL)sound;
-(void)frontLocked:(BOOL)locked animate:(BOOL)animate automatically:(BOOL)automatically;
-(void)attemptUnlockWithHardwareKeyPress:(BOOL)hardwareKeyPress;
-(void)attemptUnlock;
-(BOOL)isAttemptingUnlock;
-(void)_finishedUnlockAttemptWithStatus:(BOOL)status;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password alertDisplay:(id)display;
-(void)cancelDimTimer;
-(void)restartDimTimer:(float)timer;
-(id)dimTimer;
-(BOOL)isDimmed;
-(void)finishedDimmingScreen;
-(BOOL)moveAlertItemToAwayView:(id)awayView;
-(void)cleansePendingQueueOfAwayItems;
-(void)smsMessageReceived;
-(void)cancelScheduledSMSSounds;
-(void)_smsSoundWakeTimerFired:(id)fired;
-(void)notePasscodeGracePeriodMayHaveChanged;
-(void)dimTimerFired;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call dimmed:(BOOL)dimmed;
-(void)allowIdleSleep;
-(void)preventIdleSleep;
-(void)preventIdleSleepForNumberOfSeconds:(float)seconds;
-(void)dimScreen:(BOOL)screen;
-(void)_undimScreen;
-(void)undimScreen;
-(void)userEventOccurred;
-(BOOL)handleKeyEvent:(GSEventRef)event;
-(void)activate;
-(void)tearDownAlertWindow:(id)window;
-(void)deactivate;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(int)effectiveStatusBarStyle;
-(int)statusBarStyle;
-(int)statusBarStyleOverridesToCancel;
-(void)orderOut;
-(void)didFinishAnimatingOut;
-(void)updateNowPlayingInfo:(id)info fromiPod:(BOOL)pod;
-(void)updateiPodNowPlayingInfo:(id)info;
-(void)updateiPodPlaybackState:(id)state;
-(void)updateAwayViewNowPlayingInfo;
-(void)_fetchiPodNowPlayingInfo:(id)info;
-(void)_handleFetchediPodNowPlayingInfo:(id)info;
-(void)_nowPlayingAppChanged:(id)changed;
-(void)_iapExtendedModeChanged:(id)changed;
-(void)handleRequestedAlbumArt:(id)art;
-(void)updateClockFormat;
-(void)makeEmergencyCall;
-(void)emergencyCallWasDisplayed;
-(void)emergencyCallWasRemoved;
-(BOOL)isMakingEmergencyCall;
-(void)didAnimateLockKeypadIn;
-(void)didAnimateLockKeypadOut;
-(id)currentAlertItem;
-(void)pendOrDeactivateCurrentAlertItem;
-(BOOL)activateAlertItem:(id)item;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(void)deactivateAlertItem:(id)item;
-(void)updateInCallUI;
-(void)_batteryStatusChanged;
-(float)mediaControlHeightDelta;
-(BOOL)isShowingMediaControls;
-(void)hideMediaControls;
-(BOOL)toggleMediaControls;
-(void)toggleShowsIMEIandICCID:(id)iccid;
-(BOOL)isAwayPluginViewVisible;
-(id)highestPriorityAwayPluginController;
-(id)activeAwayPluginController;
-(id)interfaceControllingAwayPluginController;
-(id)nameOfPluginController:(id)pluginController;
-(void)enableLockScreenBundleWithName:(id)name;
-(void)disableLockScreenBundleWithName:(id)name;
-(void)pluginVisiblityStateChanged:(id)changed;
-(void)_disablePluginControllersForLock;
-(void)_disablePluginControllersForUnlock;
-(void)disablePluginContainerNotification:(id)notification;
-(void)pluginFullscreenNotification:(id)notification;
-(BOOL)awayPluginControllerShouldAnimateOthersResumption;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(void)hardwareKeyboardAvailabilityChanged;
-(BOOL)handleSlideshowHardwareButton;
-(void)setAlwaysFullscreenAwayPluginName:(id)name;
-(BOOL)isAlwaysFullscreenAwayPluginEnabled;
-(void)enableAlwaysFullscreenAwayPlugin;
-(void)unlockAlwaysFullscreenAwayView;
-(void)updateInterfaceIfNecessary;
@end
