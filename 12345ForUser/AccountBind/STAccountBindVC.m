//
//  STAccountBindVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/17.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STAccountBindVC.h"
#import "Common.h"
#import "STLoginVC.h"
#import "Masonry.h"
#import "UIImage+STChangeSize.h"

#define BTNBINDTAG  1100
#define BTNBTNVERFITAG 1101

#define KMargin  18   //左右边距
#define KVertical  12  //TF距分割线垂直
#define KVerticalTF 5 //分割线垂直间距
#define KHeightTF    30 //TF高度
#define KSIZE    CGSizeMake(20, 20)

@interface STAccountBindVC ()<UITextFieldDelegate>
@property (nonatomic, strong) UIImageView * imHeadImage;
@property (nonatomic, strong) UITextField * tfName;
@property (nonatomic, strong) UIView * viewName;
@property (nonatomic, strong) UITextField * tfPassword;
@property (nonatomic, strong) UIView * viewPassword;
@property (nonatomic, strong) UITextField * tfPhone;
@property (nonatomic, strong) UIView * viewPhone;
@property (nonatomic, strong) UITextField * tfVerification; //验证码
@property (nonatomic, strong) UIView * viewVerification;

@property (nonatomic, strong) UIButton * btnBind;
@property (nonatomic, strong) UIButton * btnVerification;
@end

@implementation STAccountBindVC

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self setTitle:@"账号绑定"];

}
- (void)viewDidLoad {
    [super viewDidLoad];
    [self navigationBar];
    [self STAccoutnInitView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
- (void)navigationBar{
     self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithTitle:@"登录" style:UIBarButtonItemStylePlain target:self action:@selector(STAccountBarClick:)];
    UIButton * left = [[UIButton alloc]initWithFrame:CGRectMake(0, 0, 23, 23)];
    [left setBackgroundImage:[UIImage imageNamed:@"relevance_bt_back_off"] forState:UIControlStateNormal];
    [left addTarget:self action:@selector(STAccountBackClick) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]initWithCustomView:left];
}
#pragma mark  - 返回按钮
- (void)STAccountBackClick{
    [self.navigationController popViewControllerAnimated:YES];
}
#pragma mark - 导航安妮
- (void)STAccountBarClick:(UIBarButtonItem *)sender{
    STLoginVC * login = [[STLoginVC alloc]init];
    [self.navigationController pushViewController:login animated:YES];
}
#pragma mark - 
- (void)STAccoutnInitView{
    [self.view addSubview:self.imHeadImage];
    [self.view addSubview:self.tfName];
    [self.view addSubview:self.viewName];
    [self.view addSubview:self.tfPassword];
    [self.view addSubview:self.viewPassword];
    [self.view addSubview:self.tfPhone];
    [self.view addSubview:self.viewPhone];
    [self.view addSubview:self.tfVerification];
    [self.view addSubview:self.viewVerification];
    [self.view addSubview:self.btnBind];
    [self.view addSubview:self.btnVerification];
    
    __weak typeof(self) ws = self;
    [self.imHeadImage mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view);
        make.right.mas_equalTo(ws.view);
        make.height.mas_equalTo(150 * sHeight);
        make.top.mas_equalTo(ws.view.mas_top).with.offset(64);
    }];
//    名字
    [self.tfName mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.imHeadImage.mas_bottom).with.offset(30);
        make.height.equalTo(@KHeightTF);
    }];
    [self.viewName mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.tfName.mas_bottom).with.offset(KVerticalTF);
        make.height.equalTo(@1);
    }];
//    密码
    [self.tfPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.viewName.mas_bottom).with.offset(KVertical);
        make.height.equalTo(@KHeightTF);
    }];
    [self.viewPassword mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.tfPassword.mas_bottom).with.offset(KVerticalTF);
        make.height.equalTo(@1);
    }];
//    手机
    [self.tfPhone mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.viewPassword.mas_bottom).with.offset(KVertical);
        make.height.equalTo(@KHeightTF);
    }];
    [self.viewPhone mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.tfPhone.mas_bottom).with.offset(KVerticalTF);
        make.height.equalTo(@1);
    }];
//    验证码
    [self.tfVerification mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin*6);
        make.top.mas_equalTo(ws.viewPhone.mas_bottom).with.offset(KVertical);
        make.height.equalTo(@KHeightTF);
    }];
    [self.viewVerification mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.tfVerification.mas_bottom).with.offset(KVerticalTF);
        make.height.equalTo(@1);
    }];
    //绑定
    [self.btnBind mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(KMargin);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.viewVerification.mas_bottom).with.offset(KVertical*2);
        make.height.equalTo(@40);
    }];
    //获取验证码
    [self.btnVerification mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.tfVerification.mas_right);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-KMargin);
        make.top.mas_equalTo(ws.viewPhone.mas_bottom).with.offset(KVertical);
        make.height.equalTo(@KHeightTF);
    }];
    
}
#pragma mrak - setter
- (UIImageView*)imHeadImage{
    if (!_imHeadImage) {
        _imHeadImage = [[UIImageView alloc]init];
        [_imHeadImage setImage:[UIImage imageNamed:@"relevance_bg_off"]];
    }
    return _imHeadImage;
}
//名字
- (UITextField *)tfName{
    if (!_tfName) {
        _tfName = [[UITextField alloc]init];
        [_tfName setPlaceholder:@"请输入您的姓名"];
//        [_tfName setValue:[UIColor redColor] forKeyPath:@"_placeholderLabel.textColor"];
        [_tfName setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
        [_tfName setDelegate:self];
        [_tfName setLeftViewMode:UITextFieldViewModeAlways];
        UIImage * image = [UIImage imageNamed:@"relevance_ic_name"];
        UIImageView * view = [[UIImageView alloc]initWithImage:[image scaleToSize:KSIZE]];
        [_tfName setLeftView:view];
        [_tfName addTarget:self action:@selector(textFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
        [_tfName setFont:AppleFont(16)];
    }
    return _tfName;
}
- (UIView *)viewName{
    if (!_viewName) {
        _viewName = [[UIView alloc]init];
        [_viewName setBackgroundColor:BUTTONBACKCOLOR];
    }
    return _viewName;
}
//密码
- (UITextField *)tfPassword{
    if (!_tfPassword) {
        _tfPassword = [[UITextField alloc]init];
        [_tfPassword setPlaceholder:@"密码由至少6位字符组成"];
        [_tfPassword setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
        [_tfPassword setDelegate:self];
        [_tfPassword setClearButtonMode:UITextFieldViewModeAlways];
        [_tfPassword setLeftViewMode:UITextFieldViewModeAlways];
        UIImage * image = [UIImage imageNamed:@"relevance_ic_key"];
        UIImageView * view = [[UIImageView alloc]initWithImage:[image scaleToSize:KSIZE]];
        [_tfPassword setLeftView:view];
        [_tfPassword addTarget:self action:@selector(textFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
        [_tfPassword setFont:AppleFont(16)];
    }
    return _tfPassword;
}
- (UIView *)viewPassword {
    if(!_viewPassword){
        _viewPassword = [[UIView alloc]init];
        [_viewPassword setBackgroundColor:BUTTONBACKCOLOR];
    }
    return _viewPassword;
}
//手机号码
- (UITextField *)tfPhone{
    if (!_tfPhone) {
        _tfPhone = [[UITextField alloc]init];
        [_tfPhone setPlaceholder:@"请输入您的手机号码"];
        [_tfPhone setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
        [_tfPhone setDelegate:self];
        [_tfPhone setClearButtonMode:UITextFieldViewModeAlways];
        [_tfPhone setLeftViewMode:UITextFieldViewModeAlways];
        UIImage * image = [UIImage imageNamed:@"relevance_ic_phone"];
        UIImageView * view = [[UIImageView alloc]initWithImage:[image scaleToSize:KSIZE]];
        [_tfPhone setLeftView:view];
        [_tfPhone addTarget:self action:@selector(textFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
        [_tfPhone setFont:AppleFont(16)];
    }
    return _tfPhone;
}
- (UIView *)viewPhone {
    if(!_viewPhone){
        _viewPhone = [[UIView alloc]init];
        [_viewPhone setBackgroundColor:BUTTONBACKCOLOR];
    }
    return _viewPhone;
}
//验证码
- (UITextField *)tfVerification{
    if (!_tfVerification) {
        _tfVerification = [[UITextField alloc]init];
        [_tfVerification setPlaceholder:@"请输入短信验证码"];
        [_tfVerification setValue:AppleFont(17) forKeyPath:@"_placeholderLabel.font"];
        [_tfVerification setDelegate:self];
        [_tfVerification setClearButtonMode:UITextFieldViewModeAlways];
        [_tfVerification setLeftViewMode:UITextFieldViewModeAlways];
        UIImage * image = [UIImage imageNamed:@"relevance_ic_verification"];
        UIImageView * view = [[UIImageView alloc]initWithImage:[image scaleToSize:KSIZE]];
        [_tfVerification setLeftView:view];
        [_tfVerification addTarget:self action:@selector(textFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
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
//绑定
- (UIButton *)btnBind{
    if (!_btnBind) {
        _btnBind = [[UIButton alloc]init];
        [_btnBind setBackgroundColor:BUTTONBACKCOLOR];
        _btnBind.enabled = NO;
        [_btnBind setTitle:@"绑定" forState:UIControlStateNormal];
        [_btnBind.titleLabel setFont:AppleFont(15)];
        [_btnBind setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [_btnBind.layer setMasksToBounds:YES];
        [_btnBind.layer setCornerRadius:2.0f];
        [_btnBind setTag:BTNBINDTAG];
        [_btnBind addTarget:self action:@selector(STAccountBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnBind;
}
//获取验证码
- (UIButton *)btnVerification{
    if (!_btnVerification) {
        _btnVerification = [[UIButton alloc]init];
        _btnVerification.enabled = NO;
        [_btnVerification setBackgroundColor:BUTTONBACKCOLOR];
        [_btnVerification setTitle:@"获取验证码" forState:UIControlStateNormal];
        [_btnVerification setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [_btnVerification.titleLabel setFont:AppleFont(15)];
        [_btnVerification.layer setMasksToBounds:YES];
        [_btnVerification.layer setCornerRadius:2.0f];
        [_btnVerification setTag:BTNBTNVERFITAG];
        [_btnVerification addTarget:self action:@selector(STAccountBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnVerification;
}
#pragma mark - 按钮事件
- (void)STAccountBtnClick:(UIButton *)sender{
    if (BTNBINDTAG == sender.tag ) {
        STLog(@"绑定%s",__func__);
    }else{
        STLog(@"验证码%s",__func__);
        if ([self valiMobile:_tfPhone.text]) {
            STLog(@"手机号码正确");
        }else{
            STLog(@"号码错误");
        }
    }
}
#pragma mark - textfield  代理
- (void)textFieldDidChange:(id)sender
{
    if (sender == _tfPhone) {
        if (_tfPhone.text.length >0) {
            [_btnVerification setEnabled:YES];
            [self.btnVerification setBackgroundColor:STColor(26, 89, 202)];
        }else{
            [_btnVerification setEnabled:NO];
            [self.btnVerification setBackgroundColor:BUTTONBACKCOLOR];
        }
    }
    if (_tfName.text.length > 0 && _tfPassword.text.length > 0 && _tfPhone.text.length > 0 && _tfVerification.text.length > 0) {
        [_btnBind setEnabled:YES];
        [self.btnBind setBackgroundColor:STColor(26, 89, 202)];
    }else{
         [_btnBind setEnabled:NO];
        [self.btnBind setBackgroundColor:BUTTONBACKCOLOR];
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
@end
