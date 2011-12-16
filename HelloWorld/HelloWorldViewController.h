#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController {
    UILabel* helloWorldLabel;
    UITextField* nameTextField;
}
@property (nonatomic, retain) IBOutlet UILabel* helloWorldLabel;
@property (nonatomic, retain) IBOutlet UITextField* nameTextField;

- (IBAction) sayHello:(id)sender;

@end
