/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleEvent : NSObject {
    id _data2;
    id _data3;
    id _data;
    NSInteger _type;
}

+ (id)eventWithType:(NSInteger)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
+ (id)eventWithType:(NSInteger)arg1 data:(id)arg2;

- (id)data2;
- (id)data3;
- (id)data;
- (void)dealloc;
- (id)initWithType:(NSInteger)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (NSInteger)type;

@end