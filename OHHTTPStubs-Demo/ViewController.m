//
//  ViewController.m
//  OHHTTPStubs-Demo
//
//  Created by Brooks on 2018/3/22.
//  Copyright © 2018年 Brooks. All rights reserved.
//

#import "ViewController.h"

#import "AFNetworking.h"

#if DEBUG
#import "OHHTTPStubs.h"
#import "OHPathHelpers.h"
#endif


//test JSONModel
#import <JSONModel/JSONModel.h>
#import "CityListModel.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end

@implementation ViewController
- (IBAction)butnAction:(id)sender {
    
#if DEBUG
    
    [OHHTTPStubs stubRequestsPassingTest:^BOOL(NSURLRequest * _Nonnull request) {
        return [request.URL.absoluteString isEqualToString:@"https://idont.know"];
    } withStubResponse:^OHHTTPStubsResponse * _Nonnull(NSURLRequest * _Nonnull request) {
        NSString *fixture = OHPathForFile(@"CityListModelTest.json", self.class);
        return [OHHTTPStubsResponse responseWithFileAtPath:fixture statusCode:200 headers:@{@"Content-Type":@"application/json"}];
    }];

#endif
    
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    [manager GET:@"https://idont.know"
      parameters:nil
        progress:nil
         success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
             NSLog(@"%@", responseObject);
             
             
             
             JSONModel *model = [[CityListModel alloc] initWithDictionary:responseObject error:nil];
             
             NSLog(@"model = %@", model);
             
             self.textView.text = [model toJSONString];
             
             
         } failure:^(NSURLSessionDataTask * _Nonnull task, NSError *error){
             NSLog(@"error = %@", error);
             self.textView.text = [NSString stringWithFormat:@"%@", error.description];
         }];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
}



@end
