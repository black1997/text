//
//  STNeedSuitVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/17.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STNeedSuitVC.h"

#import "Masonry.h"

#import "WebViewJavascriptBridge.h"

#import "URL.h"

@interface STNeedSuitVC ()<UIWebViewDelegate>
@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong) WebViewJavascriptBridge* bridge;
@end

@implementation STNeedSuitVC

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self setTitle:@"我要述求"];
    [self initView];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(needsuitBack)];
    
    [self.view addSubview:self.webView];
    self.bridge = [WebViewJavascriptBridge bridgeForWebView:self.webView];
    
    self.webView.delegate = self;
    NSString *url = [NSString stringWithFormat:@"%@%@",kUrl,TODOPAGE];
    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:url]];
    [self.webView loadRequest:request];
    
}
- (void)needsuitBack{
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
