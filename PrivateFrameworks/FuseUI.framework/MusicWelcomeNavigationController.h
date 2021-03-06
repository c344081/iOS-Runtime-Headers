/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicWelcomeNavigationController : MusicNavigationController <MusicClientContextConsuming, MusicJSNativeViewControllerFactory, MusicJSWelcomeNativeViewControllerDelegate> {
    MusicClientContext *_clientContext;
    <MusicWelcomeNavigationControllerDisappearanceObserver> *_disappearanceObserver;
    NSMutableArray *_queuedNativeViewEventTypes;
    BOOL _registeredWithModalNavigationStackRegistry;
    MusicWelcomePlaceholderView *_welcomePlaceholderView;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MusicWelcomeNavigationControllerDisappearanceObserver> *disappearanceObserver;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)automaticallyInstallAccountBarButtonItem;
+ (BOOL)automaticallyInstallSearchBarButtonItem;

- (void).cxx_destruct;
- (void)_dispatchNativeViewEventOfType:(int)arg1;
- (void)_handleClientDidLoadNotification:(id)arg1;
- (void)_setRegisteredWithModalNavigationStackRegistry:(BOOL)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)disappearanceObserver;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)jsDidCloseWelcomeNativeViewController:(id)arg1 withOptions:(id)arg2;
- (void)jsWelcomeNativeViewController:(id)arg1 setWelcomeDocument:(id)arg2 options:(id)arg3;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDisappearanceObserver:(id)arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
