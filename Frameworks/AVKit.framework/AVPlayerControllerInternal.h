/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerControllerInternal : AVPlayerController {
    int _actionAtItemEnd;
    BOOL _atMaxTime;
    BOOL _atMinTime;
    NSArray *_audioMediaSelectionOptions;
    unsigned int _audioSessionInterrupted;
    id _audioSessionInterruptionObserver;
    NSArray *_availableMetadataFormats;
    BOOL _compatibleWithAirPlayVideo;
    BOOL _composable;
    NSArray *_contentChapters;
    unsigned int _deviceBatteryChargingOrFull;
    unsigned int _deviceBatteryMonitoringWasEnabled;
    id _deviceBatteryStateDidChangeObserver;
    BOOL _disablingAutomaticTermination;
    BOOL _forceScanning;
    BOOL _hasProtectedContent;
    unsigned int _isPictureInPictureSupported;
    BOOL _isResumed;
    BOOL _isScanningBackward;
    BOOL _isScanningForward;
    BOOL _isSeeking;
    unsigned int _jKeyDown;
    unsigned int _kKeyDown;
    unsigned int _lKeyDown;
    NSArray *_legibleMediaSelectionOptions;
    BOOL _looping;
    NSDictionary *_metadata;
    BOOL _pendingSeek;
    unsigned int _pictureInPictureInterrupted;
    BOOL _playbackSuspended;
    AVPlayer *_player;
    id _playerItemDidPlayToEndTimeObserver;
    id _playerItemTimeJumpedObserver;
    CALayer<AVPlayerLayer> *_playerLayer;
    unsigned int _playingOnSecondScreen;
    double _preScanningRate;
    BOOL _preventingIdleDisplaySleep;
    BOOL _preventingIdleSystemSleep;
    float _rate;
    double _rateBeforeForceScanning;
    float _rateBeforeInterruption;
    double _rateBeforeScrubBegan;
    unsigned int _scanningCount;
    BOOL _scrubbing;
    NSObject<OS_dispatch_queue> *_seekQueue;
    NSObject<OS_dispatch_source> *_seekTimer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _seekToTime;
    unsigned int _shouldPlayWhenLikelyToKeepUp;
    id _timeObserverToken;
    double _timeOfLastUpdate;
    AVValueTiming *_timing;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _toleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _toleranceBefore;
}

@property (getter=isAtMaxTime, nonatomic) BOOL atMaxTime;
@property (getter=isAtMinTime, nonatomic) BOOL atMinTime;
@property (nonatomic, retain) NSArray *availableMetadataFormats;
@property (getter=isCompatibleWithAirPlayVideo, nonatomic) BOOL compatibleWithAirPlayVideo;
@property (getter=isComposable, nonatomic) BOOL composable;
@property (nonatomic, retain) NSArray *contentChapters;
@property (getter=isDeviceBatteryChargingOrFull, nonatomic) BOOL deviceBatteryChargingOrFull;
@property (getter=isDisablingAutomaticTermination, nonatomic) BOOL disablingAutomaticTermination;
@property (nonatomic) BOOL hasProtectedContent;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isPreventingIdleDisplaySleep, nonatomic) BOOL preventingIdleDisplaySleep;
@property (getter=isPreventingIdleSystemSleep, nonatomic) BOOL preventingIdleSystemSleep;
@property (nonatomic) double rateBeforeScrubBegan;
@property (getter=isScrubbing, nonatomic) BOOL scrubbing;
@property (nonatomic, readonly) BOOL shouldPreventIdleDisplaySleep;
@property (nonatomic, retain) AVValueTiming *timing;

+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingVolume;

- (void).cxx_destruct;
- (BOOL)CALayerDestinationIsTVOut;
- (id)_DVSOptionsForMediaSelectionOptions:(id)arg1;
- (void)_attemptToResumePlaybackAfterInterruption;
- (id)_audioOptionsForMediaSelectionOptions:(id)arg1;
- (id)_auxiliaryOptionsForMediaSelectionOptions:(id)arg1;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (void)_enableAutoMediaSelection:(id)arg1;
- (id)_extendedLanguageTagsForOptions:(id)arg1;
- (BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (id)_localesForOptions:(id)arg1;
- (id)_mediaSelectionOptionForLocale:(id)arg1 options:(id)arg2;
- (id)_mediaSelectionOptionForLocale:(id)arg1 options:(id)arg2 preferAC3:(BOOL)arg3;
- (id)_playableMediaSelectionOptionsForMediaCharacteristic:(id)arg1;
- (id)_pushSystemLanguageToTop:(id)arg1;
- (id)_seekTimer;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (id)_subtitlesForOptions:(id)arg1;
- (void)_updateScanningBackwardRate;
- (void)_updateScanningForwardRate;
- (void)actuallySeekToTime;
- (BOOL)allowsExternalPlayback;
- (id)audioMediaSelectionOptions;
- (id)audioOptions;
- (void)autoplay:(id)arg1;
- (id)availableMetadataFormats;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing;
- (void)beginScrubbing:(id)arg1;
- (BOOL)canPause;
- (BOOL)canPlay;
- (BOOL)canScanBackward;
- (BOOL)canScanForward;
- (BOOL)canSeek;
- (BOOL)canSeekChapterBackward;
- (BOOL)canSeekChapterForward;
- (BOOL)canSeekFrameBackward;
- (BOOL)canSeekFrameForward;
- (BOOL)canSeekToBeginning;
- (BOOL)canSeekToEnd;
- (BOOL)canTogglePlayback;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (id)contentChapters;
- (struct CGSize { float x1; float x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (double)currentTime;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (void)decreaseVolume:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing;
- (void)endScrubbing:(id)arg1;
- (id)error;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (int)externalPlaybackType;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasContent;
- (BOOL)hasContentChapters;
- (BOOL)hasEnabledAudio;
- (BOOL)hasEnabledVideo;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasMediaSelectionOptions;
- (BOOL)hasProtectedContent;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (void)increaseVolume:(id)arg1;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (BOOL)isAtMaxTime;
- (BOOL)isAtMinTime;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isComposable;
- (BOOL)isDeviceBatteryChargingOrFull;
- (BOOL)isDisablingAutomaticTermination;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isLooping;
- (BOOL)isPictureInPictureInterrupted;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPlaying;
- (BOOL)isPlayingOnExternalScreen;
- (BOOL)isPlayingOnSecondScreen;
- (BOOL)isPreventingIdleDisplaySleep;
- (BOOL)isPreventingIdleSystemSleep;
- (BOOL)isScrubbing;
- (BOOL)isSeeking;
- (id)legibleMediaSelectionOptions;
- (id)legibleOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)metadata;
- (double)minTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)player;
- (float)preferredRate;
- (double)rate;
- (double)rateBeforeScrubBegan;
- (void)reloadAudioOptions;
- (void)reloadLegibleOptions;
- (void)reloadOptions;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (id)scanningDelays;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (void)seekFrameForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToChapter:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setAtMaxTime:(BOOL)arg1;
- (void)setAtMinTime:(BOOL)arg1;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setAvailableMetadataFormats:(id)arg1;
- (void)setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)setCompatibleWithAirPlayVideo:(BOOL)arg1;
- (void)setComposable:(BOOL)arg1;
- (void)setContentChapters:(id)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setDeviceBatteryChargingOrFull:(BOOL)arg1;
- (void)setDisablingAutomaticTermination:(BOOL)arg1;
- (void)setHasProtectedContent:(BOOL)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPictureInPictureInterrupted:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setPlayingOnSecondScreen:(BOOL)arg1;
- (void)setPreventingIdleDisplaySleep:(BOOL)arg1;
- (void)setPreventingIdleSystemSleep:(BOOL)arg1;
- (void)setRate:(double)arg1;
- (void)setRateBeforeScrubBegan:(double)arg1;
- (void)setRateWithForce:(double)arg1;
- (void)setScrubbing:(BOOL)arg1;
- (void)setTiming:(id)arg1;
- (void)setVolume:(double)arg1;
- (BOOL)shouldPreventIdleDisplaySleep;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (int)status;
- (void)throttledSeekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)timing;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)updateAtMinMaxTime;
- (void)updateTiming;
- (double)volume;

@end
