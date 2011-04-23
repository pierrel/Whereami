//
//  WhereamiAppDelegate.h
//  Whereami
//
//  Created by pierre larochelle on 4/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiAppDelegate : NSObject <UIApplicationDelegate, CLLocationManagerDelegate> {
    UIWindow *window;
	CLLocationManager *locationManager;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

