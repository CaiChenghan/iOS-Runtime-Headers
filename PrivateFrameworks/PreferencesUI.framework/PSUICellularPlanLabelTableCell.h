/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularPlanLabelTableCell : PSTableCell {
    PSUIBadgeView * _badgeView;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) PSUIBadgeView *badgeView;
@property (nonatomic, retain) UILabel *nameLabel;

+ (long long)cellStyle;
+ (id)checkIcon;
+ (id)spacerIcon;

- (void).cxx_destruct;
- (id)badgeView;
- (bool)canBeChecked;
- (bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setNameLabel:(id)arg1;

@end
