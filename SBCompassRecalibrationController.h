/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class NSMutableArray;

@interface SBCompassRecalibrationController : NSObject {
	NSMutableArray* _assertionPorts;
}
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isCompassCalibrationHUDVisible;
-(void)showHUD;
-(void)removeHUD;
-(void)clientRequestedCompassHUD:(unsigned)hud;
-(void)_clientInvalidated:(CFMachPortRef)invalidated;
@end

