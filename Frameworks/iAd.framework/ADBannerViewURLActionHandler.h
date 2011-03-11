/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSDictionary;

@interface ADBannerViewURLActionHandler : NSObject  {
    NSURL *_url;
    NSDictionary *_dialogOverrides;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didFinishBlock;

}

@property(copy) id didFinishBlock;
@property(retain) NSDictionary * dialogOverrides;
@property(retain) NSURL * url;

+ (id)bannerViewURLActionHandlerWithURL:(id)arg1 dialogOverrides:(id)arg2 didFinishBlock:(id)arg3;

- (void)handle;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)dealloc;
- (id)normalizedURL;
- (id)dialogOverrides;
- (void)setDialogOverrides:(id)arg1;
- (id)didFinishBlock;
- (void)setDidFinishBlock:(id)arg1;

@end