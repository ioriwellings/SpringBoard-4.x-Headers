/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SBZoomView : UIView {
	BOOL _hasImage;
	BOOL _hasFullSizedImage;
	BOOL _usesRoundedCorners;
	NSMutableArray* _cornerViews;
}
-(id)initWithFrame:(CGRect)frame;
-(id)initWithSnapshotFrame:(CGRect)snapshotFrame image:(id)image originalImageOrientation:(int)orientation currentImageOrientation:(int)orientation4 interfaceOrientation:(int)orientation5 doubleHeightStatusBar:(BOOL)bar preventSplit:(BOOL)split chrome:(id)chrome chromeStatusBarHidden:(BOOL)hidden needsZoomFilter:(BOOL)filter;
-(id)initWithSnapshotFrame:(CGRect)snapshotFrame ioSurface:(void*)surface snapshotTransform:(CGAffineTransform)transform;
-(void)dealloc;
-(int)_degreesForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;
-(int)_degreesForRotationFromOriginalImageOrientation:(int)originalImageOrientation toInterfaceOrientation:(int)interfaceOrientation;
-(CGSize)_rotateAndNormalizeSize:(CGSize)size withTransform:(CGAffineTransform)transform;
-(void)_createCornerViewsIfNecessaryWithCornersFrame:(CGRect)cornersFrame;
-(void)setUsesRoundedCorners:(BOOL)corners withCornersFrame:(CGRect)cornersFrame;
-(id)_chromeStatusBarImageForInterfaceOrientation:(int)interfaceOrientation;
@end

