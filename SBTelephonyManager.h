/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>
#import "RadiosPreferencesDelegate.h"

@class NSString, NSTimer, RadiosPreferences;

@interface SBTelephonyManager : NSObject <RadiosPreferencesDelegate> {
	void* _suspendDormancyAssertion;
	NSString* _operatorName;
	unsigned _suspendDormancyEnabled;
	unsigned _usingWifi : 1;
	unsigned _usingVPN : 1;
	unsigned _iTunesNeedsToRecheckActivation : 1;
	unsigned _pretendingToSearch : 1;
	unsigned _callForwardingIndicator : 2;
	unsigned _usingWirelessModem : 1;
	NSString* _inCallStatusPreamble;
	NSTimer* _inCallTimer;
	RadiosPreferences* _radioPrefs;
}
+(id)sharedTelephonyManager;
+(id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)necessary;
-(id)init;
-(void)_postStartupNotification;
-(CTServerConnectionRef)_serverConnection;
-(void)_avSystemControllerDidError:(id)_avSystemController;
-(void)_serverConnectionDidError:(XXStruct_K5nmsA)_serverConnection;
-(void)SBTelephonyDaemonRestartHandler;
-(void)updateTTYIndicator;
-(double)inCallDuration;
-(void)setCallForwardingIndicator:(int)indicator;
-(void)updateCallForwardingIndicator;
-(int)callForwardingIndicator;
-(void)updateSpringBoard;
-(void)updateStatusBarCallState:(BOOL)state;
-(void)updateStatusBarCallDuration;
-(void)setLimitTransmitPowerPerBandEnabled:(BOOL)enabled;
-(void)setFastDormancySuspended:(BOOL)suspended;
-(void)updateAirplaneMode;
-(void)airplaneModeChanged;
-(void)updateCalls;
-(void)_updateState;
-(BOOL)updateLocale;
-(BOOL)updateNetworkLocale;
-(void)handleSIMReady;
-(id)urlWithScheme:(id)scheme fromDialingNumber:(id)dialingNumber abUID:(int)uid urlPathAddition:(id)addition;
-(id)displayForOutgoingCallURL:(id)outgoingCallURL;
-(void)_delayedAudioResume;
-(long long)getRowIDOfLastCallInsert;
-(id)allMissedCallsAfterRowID:(long long)anId;
-(int)callCount;
-(BOOL)activeCallExists;
-(BOOL)heldCallExists;
-(BOOL)incomingCallExists;
-(BOOL)outgoingCallExists;
-(BOOL)inCallUsingReceiver;
-(BOOL)callWouldUseReceiver:(BOOL)receiver;
-(BOOL)shouldHangUpOnLock;
-(BOOL)inCall;
-(void)disconnectIncomingCall;
-(void)answerIncomingCall;
-(void)answerIncomingCallEndingOthers;
-(void)swapCalls;
-(void)disconnectAllCalls;
-(void)disconnectCall;
-(void)disconnectCallAndActivateHeld;
-(void)unmute;
-(void)dumpBasebandState:(id)state;
-(BOOL)MALoggingEnabled;
-(BOOL)isNetworkRegistrationEnabled;
-(void)setNetworkRegistrationEnabled:(BOOL)enabled;
-(int)dataConnectionType;
-(BOOL)EDGEIsOn;
-(id)_radioPrefs;
-(void)setIsInAirplaneMode:(BOOL)airplaneMode;
-(BOOL)isInAirplaneMode;
-(BOOL)isUsingSlowDataConnection;
-(BOOL)isUsingWiFiConnection;
-(BOOL)isTTYEnabled;
-(void)setIsUsingWiFiConnection:(BOOL)connection;
-(void)setIsUsingVPNConnection:(BOOL)connection;
-(BOOL)isUsingVPNConnection;
-(void)copyICCID:(id*)iccid IMEI:(id*)imei;
-(void)configureForTTY:(BOOL)tty;
-(BOOL)shouldPromptForTTY;
-(id)ttyTitle;
-(void)_resetCTMMode;
-(void)_headphoneChanged:(id)changed;
-(void)_proximityChanged:(id)changed;
-(void)_setRegistrationStatus:(int)status;
-(void)_updateRegistrationNow;
-(void)_cancelFakeService;
-(void)_startFakeServiceIfNecessary;
-(void)_stopFakeService;
-(BOOL)_pretendingToSearch;
-(void)carrierBundleChanged;
-(id)_fetchOperatorName;
-(void)_reallySetOperatorName:(id)name;
-(void)setOperatorName:(id)name;
-(void)operatorBundleChanged;
-(id)operatorName;
-(int)registrationStatus;
-(void)checkForRegistrationSoon;
-(id)SIMStatus;
-(int)registrationCauseCode;
-(void)noteSIMUnlockAttempt;
-(BOOL)isUsingWirelessModem;
-(void)setIsUsingWirelessModem:(BOOL)modem;
-(void)noteWirelessModemChanged;
-(void)_wokeFromSleep:(id)sleep;
@end

