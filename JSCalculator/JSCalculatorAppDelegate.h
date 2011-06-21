//
//  JSCalculatorAppDelegate.h
//  JSCalculator
//
//  Created by Jake Siebers on 6/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JSCalculatorViewController;

@interface JSCalculatorAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet JSCalculatorViewController *viewController;

@end
