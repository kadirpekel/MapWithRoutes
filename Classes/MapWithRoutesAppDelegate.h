//
//  MapWithRoutesAppDelegate.h
//  MapWithRoutes
//
//  Created by kadir pekel on 5/29/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapWithRoutesViewController;

@interface MapWithRoutesAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MapWithRoutesViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MapWithRoutesViewController *viewController;

@end

