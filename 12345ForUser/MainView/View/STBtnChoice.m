//
//  STBtnChoice.m
//  12345ForUser
//
//  Created by 文君 on 16/6/16.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STBtnChoice.h"
#import "Masonry.h"
#import "Common.h"
@implementation STBtnChoice

- (instancetype)init {
    self = [super init];
    if (self) {
        self.backgroundColor = [UIColor whiteColor];
        [self initview];
    }
    return self;
}
- (void)initview{
    [self addSubview:self.imHeadView];
    [self addSubview:self.labTitle];
    __weak typeof(self) ws = self;
    [self.imHeadView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.center.equalTo(ws);
        make.size.mas_equalTo(CGSizeMake((WIDTH-12)*0.25, (WIDTH-12)*0.25));
    }];
    [self.labTitle mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.mas_left);
        make.right.mas_equalTo(ws.mas_right);
        make.height.equalTo(@30);
        make.top.mas_equalTo(ws.imHeadView.mas_bottom);
    }];

}
- (UIImageView*)imHeadView {
    if (!_imHeadView) {
        _imHeadView = [[UIImageView alloc]init];
    }
    return _imHeadView;
}
- (UILabel * )labTitle{
    if (!_labTitle) {
        _labTitle = [[UILabel alloc]init];
        _labTitle.font = AppleFont(15);
        _labTitle.textAlignment = NSTextAlignmentCenter;
    }
    return _labTitle;
}
@end
