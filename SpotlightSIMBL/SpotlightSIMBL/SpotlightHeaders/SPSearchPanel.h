//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class NSArray, NSView, SPFTEController, SPSearchField;

@interface SPSearchPanel : NSPanel
{
    SPFTEController *_fteController;
    BOOL _internalCollapsed;
    BOOL _collapsedState;
    NSView *_topView;
    SPSearchField *_searchField;
    NSView *_resultsView;
    NSView *_mainView;
    struct CGSize _contentMaxSizeWhenExpanded;
}

+ (void)setScreen:(id)arg1;
+ (id)screen;
@property struct CGSize contentMaxSizeWhenExpanded; // @synthesize contentMaxSizeWhenExpanded=_contentMaxSizeWhenExpanded;
@property BOOL collapsedState; // @synthesize collapsedState=_collapsedState;
@property BOOL internalCollapsed; // @synthesize internalCollapsed=_internalCollapsed;
@property(retain) NSView *mainView; // @synthesize mainView=_mainView;
@property __weak NSView *resultsView; // @synthesize resultsView=_resultsView;
@property __weak SPSearchField *searchField; // @synthesize searchField=_searchField;
@property __weak NSView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
@property(readonly) NSArray *accessibilitySharedFocusElementsForSearchFieldCell;
- (void)accessibilityResultsViewDidChange;
- (id)_cornerMask;
- (void)swipeWithEvent:(id)arg1;
- (void)expand;
- (void)collapse;
@property(getter=isCollapsed) BOOL collapsed;
- (void)setCollapsed:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_rememberSettingsAsWhenExpanded;
- (void)setFirstUseExperience:(BOOL)arg1;
@property(readonly) BOOL firstUse;
- (void)_restoreSettingsToWhenExpanded;
- (struct CGRect)_splitViewRectForContentViewRect:(struct CGRect)arg1;
- (void)_setHeight:(double)arg1 showMainView:(BOOL)arg2 animate:(BOOL)arg3;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (unsigned long long)collectionBehavior;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)insertNewline:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_tryCopySelectedItemToPasteboard;
- (void)sendEvent:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
@property(readonly) double heightWhenExpanded;
@property(readonly) double heightWhenCollapsed;
- (void)awakeFromNib;

@end
