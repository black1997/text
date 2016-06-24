//
//  STForgetPasswordVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/17.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STForgetPasswordVC.h"
#import "Masonry.h"
#import "Common.h"

#define BUTTONCHANGPASSWORD   500
#define BUTTONVERIFICATION    501

#define FORGETPASSWORDSIZE   CGSizeMake(25, 25)  //头像大小
#define FORGETPASSWORDSHORIZON 15     //水平间距
#define FORGETPASSWORDVERTICAL 30     //垂直间距
#define FORGETPASSWORDVERTICALVIEW 8  //分割线垂直间距

@interface STForgetPasswordVC ()
@property (nonatomic, strong) UIImageView * imView;
@property (nonatomic, strong) UIImageView * imAccount;
@property (nonatomic, strong) UIImageView * imPassword;
@property (nonatomic, strong) UITextField * tfAccount;
@property (nonatomic, strong) UITextField * tfPassword;
@property (nonatomic, strong) UIButton * btnLogin;


@property (nonatomic, strong) UIView * viewAccount;  //分割线
@property (nonatomic, strong) UIView * viewPassword; //分割线

@property (nonatomic, strong) UITextField * tfVerification; //验证码
@property (nonatomic, strong) UIImageView * imVerification;
@property (nonatomic, strong) UIView * viewVerification;

@property (nonatomic, strong) UIButton * btnVerification;
@end

@implementation STForgetPasswordVC

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    self.title = @"找回密码";
    [self forgetInitview];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    [self backAction];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
#pragma mark - 返回
- (void)backAction{
    UIButton * left = [[UIButton alloc]initWithFrame:CGRectMake(0, 0, 23, 23)];
    [left setBackgroundImage:[UIImage imageNamed:@"relevance_bt_back_off"] forState:UIControlStateNormal];
    [left addTarget:self action:@selector(forgetBackClick) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]initWithCustomView:left];
}
- (void)forgetBackClick{
    [self.navigationController popViewControllerAnimated:YES];
}
#pragma mark - 私有方法
- (void)forgetInitview{
    [self.view addSubview:self.imView];
    [self.view addSubview:self.imAccount];
    [self.view addSubview:self.imPassword];
    [self.view addSubview:self.tfAccount];
    [self.view addSubview:self.tfPassword];
   
    [self.view addSubview:self.viewAccount];
    [self.view addSubview:self.viewPassword];
    [self.view addSubview:self.imVerification];
    [self.view addSubview:self.tfVerification];
    [self.view addSubview:self.viewVerification];
    
    
    [self.view addSubview:self.btnLogin];
    [self.view addSubview:self.btnVerification];
    
    __weak typeof(self) ws = self;
    [self.imView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view);
        make.right.mas_equalTo(ws.view);
        make.height.equalTo(@150);
        make.top.mas_equalTo(ws.view.mas_top).with.offset(64);
    }];
    [self.imAccount mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(FORGETPASSWORDSHORIZON);
        make.size.mas_equalTo(FORGETPASSWORDSIZE);
        make.top.mas_equalTo(ws.imView.mas_bottom).with.offset(FORGETPASSWORDVERTICAL);
    }];
    [self.imPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(FORGETPASSWORDSHORIZON);
        make.size.mas_equalTo(FORGETPASSWORDSIZE);
        make.top.mas_equalTo(ws.imAccount.mas_bottom).with.offset(FORGETPASSWORDVERTICAL);
    }];
    [self.tfAccount mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.imAccount.mas_right).with.offset(FORGETPASSWORDSHORIZON);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON);
        make.top.equalTo(ws.imAccount);
        make.height.equalTo(ws.imAccount);
    }];
    [self.tfPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.imAccount.mas_right).with.offset(FORGETPASSWORDSHORIZON);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON);
        make.top.equalTo(ws.imPassword);
        make.height.equalTo(ws.imAccount);
    }];
    
    [self.viewAccount mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(FORGETPASSWORDSHORIZON);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON);
        make.height.equalTo(@1);
        make.top.mas_equalTo(ws.imAccount.mas_bottom).with.offset(FORGETPASSWORDVERTICALVIEW);
    }];
    [self.viewPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(FORGETPASSWORDSHORIZON);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON);
        make.height.equalTo(@1);
        make.top.mas_equalTo(ws.imPassword.mas_bottom).with.offset(FORGETPASSWORDVERTICALVIEW);
    }];
    
    //验证码
    [self.imVerification mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(FORGETPASSWORDSHORIZON);
        make.size.mas_equalTo(FORGETPASSWORDSIZE);
        make.top.mas_equalTo(ws.imPassword.mas_bottom).with.offset(FORGETPASSWORDVERTICAL);
    }];
    [self.tfVerification mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.imAccount.mas_right).with.offset(FORGETPASSWORDSHORIZON);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON*6);
        make.top.equalTo(ws.imVerification);
        make.height.equalTo(ws.imAccount);
    }];
    [self.viewVerification mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(FORGETPASSWORDSHORIZON);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON);
        make.height.equalTo(@1);
        make.top.mas_equalTo(ws.imVerification.mas_bottom).with.offset(FORGETPASSWORDVERTICALVIEW);
    }];
//    验证码按钮
    [self.btnVerification mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.tfVerification.mas_right);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON);
        make.bottom.mas_equalTo(ws.tfVerification.mas_bottom);
        make.height.equalTo(@30);
    }];
    
    [self.btnLogin mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(FORGETPASSWORDSHORIZON);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-FORGETPASSWORDSHORIZON);
        make.height.equalTo(@40);
        make.top.mas_equalTo(ws.tfVerification.mas_bottom).with.offset(FORGETPASSWORDSHORIZON*3);
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
        [_imAccount setImage:[UIImage imageNamed:@"relevance_ic_key"]];
    }
    return _imAccount;
}
- (UIImageView*)imPassword{
    if (!_imPassword) {
        _imPassword = [[UIImageView alloc]init];
        [_imPassword setContentMode:UIViewContentModeScaleAspectFit];
        [_imPassword setImage:[UIImage imageNamed:@"relevance_ic_phone"]];
    }
    return _imPassword;
}
- (UITextField*)tfAccount{
    if (!_tfAccount) {
        _tfAccount = [[UITextField alloc]init];
        _tfAccount.placeholder = @"新密码由至少6位字符组成";
        [_tfAccount setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
        [_tfAccount addTarget:self action:@selector(forgetTextFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
    }
    return _tfAccount;
}
- (UITextField*)tfPassword{
    if (!_tfPassword) {
        _tfPassword = [[UITextField alloc]init];
        _tfPassword.placeholder = @"请输入您的手机号码";
        [_tfPassword setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
        [_tfPassword addTarget:self action:@selector(forgetTextFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
    }
    return _tfPassword;
}
- (UIButton*)btnLogin{
    if (!_btnLogin) {
        _btnLogin = [[UIButton alloc]init];
        [_btnLogin setEnabled:NO];
        [_btnLogin setBackgroundColor:BUTTONBACKCOLOR];
        [_btnLogin setTitle:@"修改密码" forState:UIControlStateNormal];
        [_btnLogin.titleLabel setFont:AppleFont(18)];
        [_btnLogin setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        _btnLogin.layer.masksToBounds = YES;
        _btnLogin.layer.cornerRadius = 4.0f;
        [_btnLogin setTag:BUTTONCHANGPASSWORD];
        [_btnLogin addTarget:self action:@selector(forgetPasswordBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnLogin;
}
- (UIButton *)btnVerification{
    if (!_btnVerification) {
        _btnVerification = [[UIButton alloc]init];
        [_btnVerification setEnabled:NO];
        [_btnVerification setTitle:@"获取验证码" forState:UIControlStateNormal];
        [_btnVerification setBackgroundColor:BUTTONBACKCOLOR];
        [_btnVerification setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        _btnVerification.titleLabel.font = AppleFont(14);
        [_btnVerification.titleLabel setTextAlignment:NSTextAlignmentRight];
        [_btnVerification setTag:BUTTONVERIFICATION];
        [_btnVerification addTarget:self action:@selector(forgetPasswordBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnVerification;
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

//验证码
- (UITextField *)tfVerification{
    if (!_tfVerification) {
        _tfVerification = [[UITextField alloc]init];
        [_tfVerification setPlaceholder:@"请输入短信验证码"];
        [_tfVerification setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
        [_tfVerification setClearButtonMode:UITextFieldViewModeAlways];
        [_tfVerification addTarget:self action:@selector(forgetTextFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
        [_tfVerification setFont:AppleFont(16)];
    }
    return _tfVerification;
}
- (UIView *)viewVerification {
    if(!_viewVerification){
        _viewVerification = [[UIView alloc]init];
        [_viewVerification setBackgroundColor:BUTTONBACKCOLOR];
    }
    return _viewVerification;
}

- (UIImageView*)imVerification{
    if (!_imVerification) {
        _imVerification = [[UIImageView alloc]init];
        [_imVerification setImage:[UIImage imageNamed:@"relevance_ic_verification"]];
    }
    return _imVerification;
}
#pragma mark - textField
- (void)forgetTextFieldDidChange:(id)sender
{
    if (sender == _tfPassword) {
        if (_tfPassword.text.length >0) {
            [_btnVerification setEnabled:YES];
            [_btnVerification setBackgroundColor:STColor(26, 89, 202)];
        }else{
            [_btnVerification setEnabled:NO];
            [_btnVerification setBackgroundColor:BUTTONBACKCOLOR];
        }
    }
    if (_tfAccount.text.length >0 && _tfPassword.text.length >0) {
        if (_tfVerification.text.length >0) {
            [_btnLogin setEnabled:YES];
            [_btnLogin setBackgroundColor:STColor(26, 89, 202)];
        }else{
            [_btnLogin setEnabled:NO];
            [_btnLogin setBackgroundColor:BUTTONBACKCOLOR];
        }
    }
    
    
}
#pragma mark - 判断手机号码
- (BOOL )valiMobile:(NSString *)mobile{
    if (mobile.length < 11)
    {
        return false;
    }else{
        /**
         * 移动号段正则表达式
         */
        NSString *CM_NUM = @"^((13[4-9])|(147)|(15[0-2,7-9])|(178)|(18[2-4,7-8]))\\d{8}|(1705)\\d{7}$";
        /**
         * 联通号段正则表达式
         */
        NSString *CU_NUM = @"^((13[0-2])|(145)|(15[5-6])|(176)|(18[5,6]))\\d{8}|(1709)\\d{7}$";
        /**
         * 电信号段正则表达式
         */
        NSString *CT_NUM = @"^((133)|(153)|(177)|(18[0,1,9]))\\d{8}$";
        
        
        NSPredicate *pred1 = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", CM_NUM];
        BOOL isMatch1 = [pred1 evaluateWithObject:mobile];
        NSPredicate *pred2 = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", CU_NUM];
        BOOL isMatch2 = [pred2 evaluateWithObject:mobile];
        NSPredicate *pred3 = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", CT_NUM];
        BOOL isMatch3 = [pred3 evaluateWithObject:mobile];
        
        if (isMatch1 || isMatch2 || isMatch3) {
            return true;
        }else{
            return false;
        }
    }
    return nil;
}
#pragma mark - btnClcik
- (void)forgetPasswordBtnClick:(UIButton*)sender{
    if (BUTTONCHANGPASSWORD == sender.tag) {
        STLog(@"修改密码%s",__FUNCTION__);
    }else{
        STLog(@"获取验证码%s",__FUNCTION__);
        if ([self valiMobile:_tfPassword.text]) {
            STLog(@"手机号正确%s",__FUNCTION__);
        }else{
            STLog(@"手机号码错误%s",__FUNCTION__);
        }
    }
}
@end
