//
//  STKnowledgeVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/20.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STKnowledgeVC.h"

#import "Masonry.h"

#import "WebViewJavascriptBridge.h"

#import "URL.h"

@interface STKnowledgeVC ()<UIWebViewDelegate>
@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong) WebViewJavascriptBridge* bridge;

@end

@implementation STKnowledgeVC

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self initView];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    [self setTitle:@"账号绑定text"];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(knowledgeBack)];
    
    [self.view addSubview:self.webView];
    NSString *url = [NSString stringWithFormat:@"%@%@",kUrl,BIND];
    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:url]];
    [self.webView loadRequest:request];
    
    
    [WebViewJavascriptBridge enableLogging];
   
    self.bridge = [WebViewJavascriptBridge bridgeForWebView:self.webView];
    
    [self.bridge setWebViewDelegate:self];
    
    
    [self.bridge callHandler:@"smsVerify" data:@"13728027173" responseCallback:^(id responseData) {
        NSLog(@"currrn data;");
    }];

   
}
#pragma mark - 代理

- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType {
    if(request){
        NSLog(@"%s",__func__);
        return YES;
    }else{
        return NO;
    }
}
- (void)webViewDidStartLoad:(UIWebView *)webView{
    NSLog(@"%s",__func__);
}

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error{
    NSLog(@"%s",__func__);
}

-(void)knowledgeBack{
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
#pragma mark - private
- (void)initView
{
    __weak typeof (self) ws = self;
    [self.webView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.equalTo(ws.view);
    }];
}
#pragma mark - getter and setter
- (UIWebView *)webView
{
    if (!_webView) {
        _webView = [[UIWebView alloc] init];
    }
    return _webView;
}


@end
