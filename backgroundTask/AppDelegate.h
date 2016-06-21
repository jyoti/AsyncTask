//
//  AppDelegate.h
//  backgroundTask
//
//  Created by jasmin vidja on 18/06/16.
//  Copyright © 2016 Malay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, copy) void(^backgroundTransferCompletionHandler)();

@end

