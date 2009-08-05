/* 
Copyright 2009 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "HS" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/hs_license
*/

#import <Cocoa/Cocoa.h>
#import "dgbase/DetailsPanel.h"

@interface DetailsPanel : DetailsPanelBase
{
    IBOutlet NSImageView *dupeImage;
    IBOutlet NSProgressIndicator *dupeProgressIndicator;
    IBOutlet NSImageView *refImage;
    IBOutlet NSProgressIndicator *refProgressIndicator;
    
    PyApp *py;
    BOOL _needsRefresh;
    NSString *_dupePath;
    NSString *_refPath;
}
@end