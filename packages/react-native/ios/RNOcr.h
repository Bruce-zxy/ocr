#ifdef __cplusplus
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNOcrSpec.h"

@interface RNOcr : NSObject <NativeOcrSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RNOcr : NSObject <RCTBridgeModule>
#endif

@end