/* 
Copyright 2009 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "HS" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/hs_license
*/

#import <Cocoa/Cocoa.h>
#import "Outline.h"
#import "DirectoryPanel.h"
#import "PyDupeGuru.h"

@interface MatchesView : OutlineView
- (void)keyDown:(NSEvent *)theEvent;
@end

@interface ResultWindowBase : NSWindowController
{
@protected
    IBOutlet PyDupeGuruBase *py;
    IBOutlet id app;
    IBOutlet NSView *actionMenuView;
    IBOutlet NSSegmentedControl *deltaSwitch;
    IBOutlet NSView *deltaSwitchView;
    IBOutlet NSView *filterFieldView;
    IBOutlet MatchesView *matches;
	IBOutlet NSSegmentedControl *pmSwitch;
    IBOutlet NSView *pmSwitchView;
	IBOutlet NSTextField *stats;
    
    BOOL _powerMode;
    BOOL _displayDelta;
}
/* Override */
- (NSString *)logoImageName;

/* Helpers */
- (NSArray *)getSelected:(BOOL)aDupesOnly;
- (NSArray *)getSelectedPaths:(BOOL)aDupesOnly;
- (void)updatePySelection;
- (void)performPySelection:(NSArray *)aIndexPaths;
- (void)refreshStats;

/* Actions */
- (IBAction)changeDelta:(id)sender;
- (IBAction)changePowerMarker:(id)sender;
- (IBAction)copyMarked:(id)sender;
- (IBAction)deleteMarked:(id)sender;
- (IBAction)expandAll:(id)sender;
- (IBAction)moveMarked:(id)sender;
- (IBAction)switchSelected:(id)sender;
- (IBAction)togglePowerMarker:(id)sender;

/* Notifications */
- (void)jobCompleted:(NSNotification *)aNotification;
@end
