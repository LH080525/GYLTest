
NSURL *url = [NSURL URLWithString:URL_CreateList];
NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url];
request.HTTPMethod = @"POST";

// 拼串
NSMutableString *string=[[NSMutableString alloc] init];
for(NSString *key in [dict allKeys])
{
    NSString *value= dict[key];
    [string appendFormat:@"%@=%@&",key,value];
}
NSString *bodyString=[string substringToIndex:string.length-1];

request.HTTPBody = [bodyString dataUsingEncoding:NSUTF8StringEncoding];

[NSURLConnection sendAsynchronousRequest:request queue:[[NSOperationQueue alloc] init] completionHandler:^(NSURLResponse *response, NSData *data, NSError *connectionError) {
    
    if (connectionError) {
        NSLog(@"connectionError = %@", connectionError.userInfo);
    }
    
    NSString *dataStr = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"dataStr = %@", dataStr);
    
}];
