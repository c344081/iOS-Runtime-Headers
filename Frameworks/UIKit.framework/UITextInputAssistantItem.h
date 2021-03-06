/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputAssistantItem : NSObject {
    BOOL _allowsHidingShortcuts;
    NSArray *_centerBarButtonGroups;
    NSArray *_leadingBarButtonGroups;
    UIKeyboardAssistantBar *_owner;
    NSArray *_trailingBarButtonGroups;
}

@property (nonatomic) BOOL allowsHidingShortcuts;
@property (getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:, nonatomic, copy) NSArray *centerBarButtonGroups;
@property (getter=_hasItemsToDisplay, nonatomic, readonly) BOOL hasItemsToDisplay;
@property (nonatomic, copy) NSArray *leadingBarButtonGroups;
@property (getter=_owner, setter=_setOwner:, nonatomic) UIKeyboardAssistantBar *owner;
@property (getter=_requiresPredictionDisabled, nonatomic, readonly) BOOL requiresPredictionDisabled;
@property (nonatomic, copy) NSArray *trailingBarButtonGroups;

- (id)_centerBarButtonGroups;
- (BOOL)_hasItemsToDisplay;
- (id)_owner;
- (BOOL)_requiresPredictionDisabled;
- (void)_setCenterBarButtonGroups:(id)arg1;
- (void)_setOwner:(id)arg1;
- (BOOL)allowsHidingShortcuts;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)leadingBarButtonGroups;
- (void)setAllowsHidingShortcuts:(BOOL)arg1;
- (void)setLeadingBarButtonGroups:(id)arg1;
- (void)setTrailingBarButtonGroups:(id)arg1;
- (id)trailingBarButtonGroups;

@end
