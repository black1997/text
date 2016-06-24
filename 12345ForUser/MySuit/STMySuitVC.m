//
//  STMySuitVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/17.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STMySuitVC.h"

#import "Masonry.h"

#import "WebViewJavascriptBridge.h"

#import "URL.h"

@interface STMySuitVC ()<UIWebViewDelegate>
@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong) WebViewJavascriptBridge* bridge;
@end

@implementation STMySuitVC
- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self setTitle:@"我的诉求"];
    [self initView];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor lightGrayColor];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(mysuitBack)];
    
    [self.view addSubview:self.webView];
    self.bridge = [WebViewJavascriptBridge bridgeForWebView:self.webView];
    
    self.webView.delegate = self;
    
    NSString *url = [NSString stringWithFormat:@"%@%@",kUrl,SUIT];

    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:url]];
    [self.webView loadRequest:request];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
- (void)mysuitBack{
    [self dismissViewControllerAnimated:YES completion:nil];
}
#pragma mark - UIWebViewDelegate
//开始加载时调用
- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType
{
//    NSString *url = request.URL.absoluteString;
    return true;
}
- (void)webView:(UIWebView *)webView didFailLoadWithError:(nullable NSError *)error {
    NSLog(@"%s",__func__);
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
