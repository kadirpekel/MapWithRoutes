//
//  MapWithRoutesAppDelegate.m
//  MapWithRoutes
//
//  Created by kadir pekel on 5/29/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "MapWithRoutesAppDelegate.h"
#import "MapWithRoutesViewController.h"

@implementation MapWithRoutesAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
