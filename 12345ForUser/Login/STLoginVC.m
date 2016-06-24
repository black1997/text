//
//  STLoginVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/16.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STLoginVC.h"
#import "Masonry.h"
#import "Common.h"
#import "STAccountBindVC.h"

#import "STForgetPasswordVC.h"
#define BTNLOGINTAG  1000
#define BTNFORGETPASSWORDTAG  10001

@interface STLoginVC ()<UITextFieldDelegate>
@property (nonatomic, strong) UIImageView * imView;
@property (nonatomic, strong) UIImageView * imAccount;
@property (nonatomic, strong) UIImageView * imPassword;
@property (nonatomic, strong) UITextField * tfAccount;
@property (nonatomic, strong) UITextField * tfPassword;
@property (nonatomic, strong) UIButton * btnLogin;
@property (nonatomic, strong) UIButton * btnForgetPassword;
@property (nonatomic, strong) UIView * viewAccount;  //分割线
@property (nonatomic, strong) UIView * viewPassword; //分割线
@end

@implementation STLoginVC
- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    self.title = @"登录";
    [self initview];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    [self rightBtn];
}
#pragma mark - 右侧按钮
- (void)rightBtn {
    UIButton * rightBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    [rightBtn setTintColor:[UIColor whiteColor]];
    rightBtn.frame = CGRectMake(0, 0, 80,60);
    [rightBtn setTitle:@"账号绑定" forState:UIControlStateNormal];
    rightBtn.titleLabel.font = AppleFont(16);
    [rightBtn addTarget:self action:@selector(accountBind) forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem * rightBar = [[UIBarButtonItem alloc]initWithCustomView:rightBtn];
    rightBar.tintColor = [UIColor whiteColor];
    self.navigationItem.rightBarButtonItem = rightBar;
    
    
    UIButton * left = [[UIButton alloc]initWithFrame:CGRectMake(0, 0, 23, 23)];
    [left setBackgroundImage:[UIImage imageNamed:@"relevance_bt_back_off"] forState:UIControlStateNormal];
    [left addTarget:self action:@selector(loginBackClick) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]initWithCustomView:left];
    
}
- (void)loginBackClick{
    [self.navigationController popViewControllerAnimated:YES];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
#pragma mrak - 账号绑定
- (void)accountBind{
    [self.navigationController popViewControllerAnimated:YES];
}
#pragma mark - 私有方法
- (void)initview{
    [self.view addSubview:self.imView];
    [self.view addSubview:self.imAccount];
    [self.view addSubview:self.imPassword];
    [self.view addSubview:self.tfAccount];
    [self.view addSubview:self.tfPassword];
    [self.view addSubview:self.btnLogin];
    [self.view addSubview:self.btnForgetPassword];
    [self.view addSubview:self.viewAccount];
    [self.view addSubview:self.viewPassword];
    __weak typeof(self) ws = self;
    [self.imView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view);
        make.right.mas_equalTo(ws.view);
        make.height.equalTo(@150);
        make.top.mas_equalTo(ws.view.mas_top).with.offset(64);
    }];
    [self.imAccount mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(15);
        make.size.mas_equalTo(CGSizeMake(25, 25));
        make.top.mas_equalTo(ws.imView.mas_bottom).with.offset(30);
    }];
    [self.imPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(15);
        make.size.mas_equalTo(CGSizeMake(25, 25));
        make.top.mas_equalTo(ws.imAccount.mas_bottom).with.offset(30);
    }];
    [self.tfAccount mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.imAccount.mas_right).with.offset(15);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-15);
        make.top.equalTo(ws.imAccount);
        make.height.equalTo(ws.imAccount);
    }];
    [self.tfPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.imAccount.mas_right).with.offset(15);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-15);
        make.top.equalTo(ws.imPassword);
        make.height.equalTo(ws.imAccount);
    }];
    [self.btnLogin mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(15);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-15);
        make.height.equalTo(@40);
        make.top.mas_equalTo(ws.tfPassword.mas_bottom).with.offset(45);
    }];
    [self.btnForgetPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.right.equalTo(ws.btnLogin);
        make.top.mas_equalTo(ws.btnLogin.mas_bottom).with.offset(15);
        make.height.equalTo(@25);
        make.width.equalTo(@60);
    }];
    
    [self.viewAccount mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(15);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-15);
        make.height.equalTo(@1);
        make.top.mas_equalTo(ws.imAccount.mas_bottom).with.offset(8);
    }];
    [self.viewPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(15);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-15);
        make.height.equalTo(@1);
        make.top.mas_equalTo(ws.imPassword.mas_bottom).with.offset(8);
    }];
    
}
#pragma mrak - setter
- (UIImageView*)imView{
    if (!_imView) {
        _imView = [[UIImageView alloc]init];
        [_imView setImage:[UIImage imageNamed:@"relevance_bg_off"]];
    }
    return _imView;
}
- (UIImageView*)imAccount{
    if (!_imAccount) {
        _imAccount = [[UIImageView alloc]init];
        [_imAccount setImage:[UIImage imageNamed:@"relevance_ic_name"]];
    }
    return _imAccount;
}
- (UIImageView*)imPassword{
    if (!_imPassword) {
        _imPassword = [[UIImageView alloc]init];
        [_imPassword setContentMode:UIViewContentModeScaleAspectFit];
        [_imPassword setImage:[UIImage imageNamed:@"relevance_ic_key"]];
    }
    return _imPassword;
}
- (UITextField*)tfAccount{
    if (!_tfAccount) {
        _tfAccount = [[UITextField alloc]init];
        _tfAccount.placeholder = @"姓名/手机号码";
        [_tfAccount setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
//        _tfAccount.delegate = self;
        [_tfAccount addTarget:self action:@selector(loginTextFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
    }
    return _tfAccount;
}
- (UITextField*)tfPassword{
    if (!_tfPassword) {
        _tfPassword = [[UITextField alloc]init];
        _tfPassword.placeholder = @"请输入密码";
        [_tfPassword setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
//        _tfPassword.delegate = self;
        [_tfPassword addTarget:self action:@selector(loginTextFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
    }
    return _tfPassword;
}
- (UIButton*)btnLogin{
    if (!_btnLogin) {
        _btnLogin = [[UIButton alloc]init];
        [_btnLogin setEnabled:NO];
        [_btnLogin setBackgroundColor:BUTTONBACKCOLOR];
        [_btnLogin setTitle:@"登录" forState:UIControlStateNormal];
        [_btnLogin setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        _btnLogin.layer.masksToBounds = YES;
        _btnLogin.layer.cornerRadius = 4.0f;
        [_btnLogin setTag:BTNLOGINTAG];
        [_btnLogin addTarget:self action:@selector(loginBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnLogin;
}
- (UIButton *)btnForgetPassword{
    if (!_btnForgetPassword) {
        _btnForgetPassword = [[UIButton alloc]init];
        [_btnForgetPassword setTitle:@"忘记密码?" forState:UIControlStateNormal];
        [_btnForgetPassword setTitleColor:STColor(26, 89, 202) forState:UIControlStateNormal];
        _btnForgetPassword.titleLabel.font = AppleFont(14);
        [_btnForgetPassword.titleLabel setTextAlignment:NSTextAlignmentRight];
        [_btnForgetPassword setTag:BTNFORGETPASSWORDTAG];
        [_btnForgetPassword addTarget:self action:@selector(loginBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnForgetPassword;
}
- (UIView*)viewAccount{
    if (!_viewAccount) {
        _viewAccount = [[UIView alloc]init];
        [_viewAccount setBackgroundColor:BUTTONBACKCOLOR];
    }
    return _viewAccount;
}
- (UIView*)viewPassword{
    if (!_viewPassword) {
        _viewPassword = [[UIView alloc]init];
        [_viewPassword setBackgroundColor:BUTTONBACKCOLOR];
    }
    return _viewPassword;
}
#pragma mark - 登录和忘记密码按钮
- (void)loginBtnClick:(UIButton *)sender{
    if (sender.tag == BTNLOGINTAG) {
        STLog(@"登录%s",__func__);
    }else{

        STForgetPasswordVC * forget = [[STForgetPasswordVC alloc]init];
        [self.navigationController pushViewController:forget animated:YES];
    }
}
#pragma mark - textField
- (void)loginTextFieldDidChange:(id)sender
{
    if (_tfAccount.text.length > 0 && _tfPassword.text.length > 0 ) {
        [_btnLogin setEnabled:YES];
        [_btnLogin setBackgroundColor:STColor(26, 89, 202)];
    }else{
        [_btnLogin setEnabled:NO];
        [_btnLogin setBackgroundColor:BUTTONBACKCOLOR];
    }
}
@end
