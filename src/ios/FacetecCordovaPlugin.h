#import <Cordova/CDVPlugin.h>

@interface FacetecCordovaPlugin : CDVPlugin {
}

// The hooks for our plugin commands
- (void)echo:(CDVInvokedUrlCommand *)command;
- (void)getDate:(CDVInvokedUrlCommand *)command;

@end
