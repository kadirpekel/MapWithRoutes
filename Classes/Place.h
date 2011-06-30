//
//  Place.h
//
//  Created by kadir pekel on 2/6/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Place : NSObject {

	NSString* name;
	NSString* description;
	double latitude;
	double longitude;
}

@property (nonatomic, retain) NSString* name;
@property (nonatomic, retain) NSString* description;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

@end
