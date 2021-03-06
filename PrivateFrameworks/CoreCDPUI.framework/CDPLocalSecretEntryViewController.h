/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPLocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {
    UIViewController *_presentingViewController;
    id /* block */ _validSecretHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ validSecretHandler;

- (void).cxx_destruct;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)init;
- (id)pinInstructionsPrompt;
- (void)setValidSecretHandler:(id /* block */)arg1;
- (id)title;
- (id /* block */)validSecretHandler;

@end
