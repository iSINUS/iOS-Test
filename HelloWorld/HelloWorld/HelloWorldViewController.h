//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Sergei Ivanov on 23.06.12.
//  Copyright (c) 2012 IBA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>

- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;

@end
