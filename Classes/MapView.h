//
//  MapViewController.h
//
//  Created by kadir pekel on 2/7/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "RegexKitLite.h"
#import "Place.h"
#import "PlaceMark.h"

@interface MapView : UIView<MKMapViewDelegate> {

	MKMapView* mapView;
	UIImageView* routeView;
	
	NSArray* routes;
	
	UIColor* lineColor;
}

@property (nonatomic, retain) UIColor* lineColor;

-(void) showRouteFrom: (Place*) f to:(Place*) t;


@end
