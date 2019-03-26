

// 自定义Log宏，在release模式运行时，取消所有的日志输出
#ifdef DEBUG
#define LLog(...)                 NSLog(__VA_ARGS__)
#else
#define LLog(...)
#endif

// Log字典或数组，并Log是哪个类调用的哪个函数
#define LogObject(obj)            LLog(@"%s  %@", __func__, obj);
// Log指定视图的frame
#define LogFrame(view)            LLog(@"%@", NSStringFromCGRect(view.frame));
// Log指定视图中的所有子视图
#define LogSubViews(view)         LLog(@"%@", view.subviews);


// 判断系统的版本
#define iOS7_below                ([UIDevice currentDevice].systemVersion.floatValue < 7.0)
#define iOS7_beyond               ([UIDevice currentDevice].systemVersion.floatValue >= 7.0)
#define iOS8                      ([UIDevice currentDevice].systemVersion.floatValue >= 8.0)
// 角度转弧度
#define DegreeToAngle(degree)     (((degree) * M_PI) / 180)
// 弧度转角度
#define AngleToDegree(angle)      (((angle) * 180) / M_PI)
// 屏幕分辨率
#define ScreenScale               ([UIScreen mainScreen].scale)
// 3.5英寸屏幕
#define iPhone4                   ([UIScreen mainScreen].bounds.size.height == 480.0)
// 4英寸屏幕
#define iPhone5                   ([UIScreen mainScreen].bounds.size.height == 568.0)
// 4.7英寸屏幕
#define iPhone6                   ([UIScreen mainScreen].bounds.size.height == 664.0)
// 5.5英寸屏幕
#define iPhone6Plus                  ([UIScreen mainScreen].bounds.size.height == 960.0)

// 屏幕宽度
#define ScreenWidth               ([UIScreen mainScreen].bounds.size.width)
// 屏幕高度
#define ScreenHeight              ([UIScreen mainScreen].bounds.size.height)
// RGB颜色
#define UIColorWithRGB(R,G,B,alpha) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:alpha]
// 16进制色值转颜色
#define UIColorFrom16RGB(rgbValue,a)   [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

#import "NSString+LH.h"
#import "UIImage+LH.h"
#import "UIView+LH.h"
#import "NSDate+LH.h"




