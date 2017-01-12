/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievement : NSObject <HDCoding, NSSecureCoding> {
    NSUUID * _UUID;
    BOOL  _alerted;
    NSDate * _completedDate;
    NSString * _definitionIdentifier;
    NSNumber * _value;
    BOOL  _viewed;
    unsigned int  _workoutActivityType;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (getter=isAlerted, nonatomic) BOOL alerted;
@property (nonatomic, retain) NSDate *completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;
@property (getter=isViewed, nonatomic) BOOL viewed;
@property (nonatomic) unsigned int workoutActivityType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_achievementWithUUID:(id)arg1 definitionIdentifier:(id)arg2 completedDate:(id)arg3 value:(id)arg4 workoutActivityType:(unsigned int)arg5 alerted:(BOOL)arg6;
+ (id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2;
+ (id)_nextUUID;
+ (id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2 context:(id)arg3;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned int)arg4;
+ (void)setOverridenUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_achievementDefinition;
- (id)_buildKeyWithPrefix:(id)arg1 definitionIdentifier:(id)arg2 includingUserName:(BOOL)arg3 isWheelchairUser:(BOOL)arg4;
- (void)_getLocalizedStringTable:(id*)arg1 bundle:(id*)arg2 includesDefinitionIdentifier:(BOOL*)arg3;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned int)arg4;
- (BOOL)_isWheelchairUser;
- (id)_localizedStringWithContext:(id)arg1;
- (id)_pluralizeLocalizedString:(id)arg1 completeNumberOfTimes:(int)arg2;
- (id)_replacePlaceholdersInString:(id)arg1 withContext:(id)arg2;
- (BOOL)_validateConfiguration;
- (id)completedDate;
- (id)definitionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAlerted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isViewed;
- (id)localizedDescription;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1 isWheelchairUser:(BOOL)arg2;
- (id)localizedDescriptionForNewUnearnedAlert;
- (id)localizedDescriptionForNewUnearnedAlertBadgeBack;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(int)arg1;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(int)arg1 isWheelchairUser:(BOOL)arg2;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(int)arg1;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(int)arg1 isWheelchairUser:(BOOL)arg2;
- (id)localizedTitle;
- (id)localizedTitleWithIsWheelchairUser:(BOOL)arg1;
- (void)setAlerted:(BOOL)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setViewed:(BOOL)arg1;
- (void)setWorkoutActivityType:(unsigned int)arg1;
- (id)value;
- (unsigned int)workoutActivityType;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (struct CGSize { float x1; float x2; })_fiui_badgeThumbnailSizeUsingLargerDeviceSize:(BOOL)arg1;
+ (float)fiui_badgeThumbnailRenderingScale;
+ (struct CGSize { float x1; float x2; })fiui_badgeThumbnailRenderingSize;
+ (struct CGSize { float x1; float x2; })fiui_badgeThumbnailSize;

- (void)_addStickersFromBundle:(id)arg1 forType:(id)arg2 toArray:(id)arg3;
- (id)_fiui_badgeAssetNameSuffix;
- (id)_fiui_badgeContainerPath;
- (id)_fiui_imagePathForUncompletedAchievementOfSizeClass:(int)arg1;
- (id)_fiui_pathForAssetNamed:(id)arg1 ofType:(id)arg2;
- (id)fiui_badgeModelFilename;
- (id)fiui_badgePlistPath;
- (id)fiui_badgeTexturePath;
- (id)fiui_compressedBadgeModelPath;
- (BOOL)fiui_hasImageForSizeClass:(int)arg1;
- (id)fiui_imageForSizeClass:(int)arg1;
- (id)fiui_stickerBundle;
- (id)fiui_stickerURLs;
- (id)fiui_uniqueBadgeModelIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;
- (BOOL)isEquivalentToAchievement:(id)arg1 inCalendar:(id)arg2 requireSameDateToCalendarUnit:(unsigned int)arg3 sameValue:(BOOL)arg4;

@end