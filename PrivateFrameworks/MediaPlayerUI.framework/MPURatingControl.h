/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPURatingControlDelegate>, NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface MPURatingControl : UIControl {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    <MPURatingControlDelegate> *_delegate;
    } _hitTestEdgeInsets;
    NSMutableArray *_imageViews;
    UIPanGestureRecognizer *_panGestureRecognizer;
    float _rating;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property <MPURatingControlDelegate> * delegate;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitTestEdgeInsets;
@property float rating;

+ (id)ratingDotImage;
+ (id)ratingStarImage;

- (void).cxx_destruct;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_updateImageViewsForRatingAnimated:(BOOL)arg1;
- (id)delegate;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitTestEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)rating;
- (float)ratingValueForLocationInView:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setRating:(float)arg1 animated:(BOOL)arg2;
- (void)setRating:(float)arg1;

@end