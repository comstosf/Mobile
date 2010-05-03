//
//  Learn_Navi_iPhone_AppAppDelegate.h
//  Learn Navi iPhone App
//
//  Created by Michael Gillogly on 1/8/10.
//  Copyright LearnNa'vi.org Community. 2010. All rights reserved.
//

@interface Learn_Navi_iPhone_AppAppDelegate : NSObject <UIApplicationDelegate> {
    

	CGRect theRect;

    UIWindow *window;
    

}


@property (nonatomic, retain) IBOutlet UIWindow *window;


- (void)registerDefaultsFromSettingsBundle;
-(void) checkAndCreateDatabase;
- (double)getDatabaseVersion:(NSString *)aDatabase;

@end

