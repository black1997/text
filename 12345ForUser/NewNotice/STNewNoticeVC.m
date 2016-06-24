//
//  STNewNoticeVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/17.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STNewNoticeVC.h"

#import "Masonry.h"

#import "WebViewJavascriptBridge.h"

#import "URL.h"

@interface STNewNoticeVC ()<UIWebViewDelegate>
@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong) WebViewJavascriptBridge* bridge;
@end

@implementation STNewNoticeVC
- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self setTitle:@"最新通知"];
    [self initView];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(newNoticeBack)];
    
    [self.view addSubview:self.webView];
    self.bridge = [WebViewJavascriptBridge bridgeForWebView:self.webView];
    
    self.webView.delegate = self;
    NSString *url = [NSString stringWithFormat:@"%@%@",kUrl,TOPAGE];
    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:url]];
    [self.webView loadRequest:request];
}
- (void)newNoticeBack{
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
