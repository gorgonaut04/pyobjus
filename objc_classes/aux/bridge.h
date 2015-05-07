#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>
#import <UIKit/UIKit.h>

@interface bridge : NSObject {
    NSOperationQueue *queue;
}

@interface APPViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) CMMotionManager *motionManager;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
@property (nonatomic) double ac_x;
@property (nonatomic) double ac_y;
@property (nonatomic) double ac_z;

@property (nonatomic) double gy_x;
@property (nonatomic) double gy_y;
@property (nonatomic) double gy_z;

@property (nonatomic) double mg_x;
@property (nonatomic) double mg_y;
@property (nonatomic) double mg_z;

- (void)takePhoto;

@end
