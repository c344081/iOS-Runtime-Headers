/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextViewInteractableItem : NSObject <_UIRotatingAlertControllerDelegate> {
    NSArray *_actions;
    NSDictionary *_defaultAction;
    BOOL _interactionIsFinished;
    _UIRotatingAlertController *_linkInteractionAlertController;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _subRange;
    UITextView *_textView;
    UIWindow *_windowForActionSheetPresentation;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSDictionary *defaultAction;
@property (nonatomic) BOOL interactionIsFinished;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } subRange;
@property (nonatomic) UITextView *textView;
@property (nonatomic, retain) UIWindow *windowForActionSheetPresentation;

- (void).cxx_destruct;
- (id)_actionSheet;
- (void)_cleanupSheet;
- (void)_cleanupWindowForActionSheetPresentation;
- (void)_handleActionAndFinish:(id)arg1;
- (void)_showActionSheet;
- (id)actions;
- (BOOL)allowHighlight;
- (BOOL)allowInteraction;
- (id)defaultAction;
- (void)handleLongPress;
- (void)handleTap;
- (id)hostViewForSheet:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet:(id)arg1;
- (BOOL)interactionIsFinished;
- (id)localizedTitle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })presentationRectInHostViewForSheet:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setInteractionIsFinished:(BOOL)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSubRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setTextView:(id)arg1;
- (void)setWindowForActionSheetPresentation:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })subRange;
- (id)textView;
- (id)windowForActionSheetPresentation;

@end
