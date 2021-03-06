/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoRequestOptions : NSObject {
    int _deliveryMode;
    BOOL _networkAccessAllowed;
    id /* block */ _progressHandler;
    BOOL _streamingAllowed;
    int _version;
    BOOL _videoComplementAllowed;
}

@property (nonatomic) int deliveryMode;
@property (getter=isNetworkAccessAllowed, nonatomic) BOOL networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (getter=isStreamingAllowed, nonatomic) BOOL streamingAllowed;
@property (nonatomic) int version;
@property (getter=isVideoComplementAllowed, nonatomic) BOOL videoComplementAllowed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deliveryMode;
- (id)description;
- (id)init;
- (BOOL)isNetworkAccessAllowed;
- (BOOL)isStreamingAllowed;
- (BOOL)isVideoComplementAllowed;
- (id /* block */)progressHandler;
- (void)setDeliveryMode:(int)arg1;
- (void)setNetworkAccessAllowed:(BOOL)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setStreamingAllowed:(BOOL)arg1;
- (void)setVersion:(int)arg1;
- (void)setVideoComplementAllowed:(BOOL)arg1;
- (int)version;

@end
