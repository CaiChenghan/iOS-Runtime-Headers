/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDebugPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) double availabilityFreshnessWindow;
@property (nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic, retain) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (nonatomic, retain) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (nonatomic, retain) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) BOOL overrideTravelAdvisoryHypothesis;
@property (nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) BOOL saveGeocodedLocationsInTravelEngine;

+ (id)shared;

- (double)availabilityFreshnessWindow;
- (BOOL)forceDisplayOfNewTravelAdvisoryHypotheses;
- (id)init;
- (id)overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
- (double)overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
- (id)overriddenTravelAdvisoryHypothesisTransportType;
- (id)overriddenTravelAdvisoryHypothesisTravelState;
- (BOOL)overrideTravelAdvisoryHypothesis;
- (BOOL)performAgendaEntryEqualityChecksInTravelEngine;
- (BOOL)preventMarkingTravelAdvisoryEntriesAsDismissed;
- (BOOL)saveGeocodedLocationsInTravelEngine;
- (void)setAvailabilityFreshnessWindow:(double)arg1;
- (void)setForceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisCurrentTrafficDensity:(id)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisEstimatedTravelTime:(double)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisTransportType:(id)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisTravelState:(id)arg1;
- (void)setOverrideTravelAdvisoryHypothesis:(BOOL)arg1;
- (void)setPerformAgendaEntryEqualityChecksInTravelEngine:(BOOL)arg1;
- (void)setPreventMarkingTravelAdvisoryEntriesAsDismissed:(BOOL)arg1;
- (void)setSaveGeocodedLocationsInTravelEngine:(BOOL)arg1;

@end