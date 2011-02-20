/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>

@class NSSet, NSMutableSet, NSString;

@interface SBProcess : NSObject {
	NSMutableSet* _assertions;
	NSMutableSet* _limitlessAssertions;
	dispatch_queue_s* _assertionsQueue;
	NSString* _jobLabel;
	BOOL _running;
	unsigned _terminateOnSuspension : 1;
	unsigned _frontmost : 1;
	unsigned _nowPlayingWithAudio : 1;
	unsigned _recordingAudio : 1;
	unsigned _usesSocketMonitoring : 1;
	unsigned _supportsBackgroundTaskAssertions : 1;
	unsigned _hasWatchdogAssertionsOut : 1;
	int _backgroundJetsamPriority;
	int _currentJetsamPriority;
	int _activationDecounter;
	int _suspendCount;
	dispatch_queue_s* _suspendQueue;
	double _lastUnlimitedAssertionRemovedAbsoluteTime;
	dispatch_source_s* _backgroundPermissionCheckTimer;
	dispatch_source_s* _backgroundPermissionExpirationWarningTimer;
	dispatch_source_s* _taskCompletionAllowIdleSleepTimer;
	int _throttleUpCPUCount;
	int _throttleUpUICount;
	dispatch_queue_s* _throttleUpQueue;
	int _priority;
	NSSet* _allowedLockedFilePaths;
	int _pid;
	unsigned _eventPort;
	unsigned _taskNamePort;
	SBProcessTimes _times;
}
@property(copy) NSSet* allowedLockedFilePaths;
@property(copy) NSString* jobLabel;
@property(readonly, assign) int throttleUpCPUCount;
@property(readonly, assign) int throttleUpUICount;
@property(readonly, assign) int pid;
@property(assign, getter=isRunning) BOOL running;
@property(readonly, assign) unsigned eventPort;
@property(readonly, assign) unsigned taskNamePort;
@property(readonly, assign) NSSet* lockedFilePathsIgnoringAllowed;
@property(readonly, assign) double remainingAllowedAssertionDuration;
@property(readonly, assign) double execTime;
@property(readonly, assign) double elapsedCPUTime;
@property(assign) BOOL hasWatchdogAssertionsOut;
@property(readonly, assign, getter=isBeingPtraced) BOOL beingPtraced;
@property(readonly, assign, getter=isBeingDebugged) BOOL beingDebugged;
@property(readonly, assign) BOOL hasResumeAssertion;
@property(readonly, assign) int priority;
@property(readonly, assign) int suspendCount;
@property(readonly, assign) BOOL terminateOnSuspension;
@property(readonly, assign) int currentJetsamPriority;
@property(assign) int backgroundJetsamPriority;
@property(assign, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio;
@property(assign, getter=isFrontmost) BOOL frontmost;
@property(assign) BOOL supportsBackgroundTaskAssertions;
@property(assign) BOOL usesSocketMonitoring;
@property(assign, getter=isRecordingAudio) BOOL recordingAudio;
@property(readonly, assign) NSString* name;
+(void)_logJetsamPriorities;
+(void)initialize;
+(id)_allProcesses;
+(id)processForPid:(int)pid;
+(id)launchedProcessWithBundleIdentifier:(id)bundleIdentifier path:(id)path arguments:(id)arguments environment:(id)environment standardOutputPath:(id)path5 standardErrorPath:(id)path6 machServices:(id)services threadPriority:(long long)priority frontmost:(BOOL)frontmost backgroundJetsamPriority:(int)priority10 waitForDebugger:(BOOL)debugger allowedLockedFilePaths:(id)paths terminateOnSuspension:(BOOL)suspension;
+(int)defaultBackgroundJetsamPriority;
+(void)_enumerateAllProcessesWithBlock:(id)block;
+(void)shutdownSuspendedProcessSockets;
+(void)scheduleTaskCompletionAllowIdleSleep;
+(void)cancelTaskCompletionAllowIdleSleep;
+(void)hostwideUserElapsedCPUTime:(double*)time systemElapsedCPUTime:(double*)time2 idleElapsedCPUTime:(double*)time3;
-(id)initWithPid:(int)pid frontmost:(BOOL)frontmost backgroundJetsamPriority:(int)priority jobLabel:(id)label eventPortName:(id)name allowedLockedFilePaths:(id)paths terminateOnSuspension:(BOOL)suspension execTime:(double)time;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)debugDescription;
-(id)description;
-(BOOL)suspend;
-(BOOL)resume;
-(BOOL)throttleUpCPU;
-(BOOL)throttleDownCPU;
-(BOOL)throttleUpUI;
-(BOOL)throttleDownUI;
-(void)assertionsQueue_scheduleTaskCompletionAllowIdleSleep;
-(void)assertionsQueue_cancelTaskCompletionAllowIdleSleep;
-(BOOL)changeCounter:(int*)counter change:(int)change queue:(dispatch_queue_s*)queue ifBlockSucceeds:(id)succeeds;
-(BOOL)incrementCounter:(int*)counter queue:(dispatch_queue_s*)queue ifBlockSucceeds:(id)succeeds;
-(BOOL)decrementCounter:(int*)counter queue:(dispatch_queue_s*)queue ifBlockSucceeds:(id)succeeds;
-(void)watchdogTerminateWithReason:(int)reason format:(id)format;
-(void)_notifyOfExpirationWarning;
-(void)dispatchSharedLockCheck;
-(int)suspendQueue_currentJetsamPriority;
-(void)suspendQueue_updateJetsamPriority;
-(BOOL)suspendQueue_taskSuspend;
-(BOOL)suspendQueue_taskResume;
-(BOOL)suspendQueue_taskShutdownSockets:(int)sockets;
-(BOOL)throttleUpQueue_setPriority:(int)priority;
-(void)killWithSignal:(int)signal;
-(void)waitToExecOrExit;
-(void)_forceCrashReportWithReason:(int)reason description:(id)description;
-(BOOL)assertionsQueue_isBeingDebugged;
-(void)markWatchdogCPUTimes;
-(void)assertionsQueue_markWatchdogCPUTimes;
-(id)_crashReportCPUUsageInfo;
-(id)_crashReportThermalsInfo;
-(void)addAssertion:(id)assertion;
-(void)removeAssertion:(id)assertion;
-(void)removeAllAssertions;
-(id)assertions;
-(double)assertionsQueue_permittedBackgroundDuration;
-(dispatch_source_s*)assertionsQueue_setupOneShotTimer:(double)timer withBlock:(id)block;
-(void)assertionsQueue_updateBackgroundPermissionCheckTimer;
@end

