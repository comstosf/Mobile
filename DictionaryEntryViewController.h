//
//  DictionaryEntryViewController.h
//  Learn Navi iPhone App
//
//  Created by Michael Gillogly on 1/24/10.
//  Copyright 2010 LearnNa'vi.org Community. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DictionaryEntryViewController : UIViewController {
	UISegmentedControl *segmentedControl;
	DictionaryEntry *entry;
	UILabel *fancyType;
	UILabel *term;
	UITextView *definition;
}

@property (nonatomic, retain) IBOutlet UISegmentedControl *segmentedControl;
@property (nonatomic, retain) IBOutlet UILabel *fancyType, *term;
@property (nonatomic, retain) IBOutlet UITextView *definition;
@property (nonatomic, retain) DictionaryEntry *entry;

- (IBAction)playAudioFile:(id)sender;

@end
