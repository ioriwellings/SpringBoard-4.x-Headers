/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SSDownloadQueueObserver.h"

@class SSDownloadQueue, NSMutableSet;

@interface SBDownloadController : NSObject <SSDownloadQueueObserver> {
	SSDownloadQueue* _downloadQueue;
	NSMutableSet* _pendingDownloadRemovals;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_delayedDownloadQueueChange;
-(void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
-(void)downloadQueue:(id)queue downloadStatusChangedAtIndex:(int)index;
-(void)downloadQueueNetworkUsageChanged:(id)changed;
-(void)_showDownloadQueueError;
-(void)downloadQueueError:(id)error;
-(BOOL)checkQueue;
-(id)currentDownloads;
-(id)downloadQueue;
@end

