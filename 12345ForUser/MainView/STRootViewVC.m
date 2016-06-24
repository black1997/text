//
//  STRootViewVC.m
//  12345ForUser
//
//  Created by 文君 on 16/6/16.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STRootViewVC.h"
#import "Masonry.h"
#import "Common.h"
#import "STBtnChoice.h"
#import "STSmallBtnChoice.h"
#import "UIImage+STChangeSize.h"
#import "STAccountBindVC.h"

#import "STMySuitVC.h"

#import "STNewNoticeVC.h"

#import "STNeedSuitVC.h"

#import "STKnowledgeVC.h"

#import "STAES.h"

#import "GDataXMLNode.h"

#import "STHttpquest.h"

#import "StandardService.h"

#define BUTTONSUIT   1000
#define BUTTONNOTICE 1001
#define BUTTONMYSUIT 1002
#define BUTTONACCOUTNBIND 1003
#define BUTTONKNOWLEDGE 1004


@interface STRootViewVC ()
@property (nonatomic, strong) UIImageView * imView;
@property (nonatomic, strong) STBtnChoice * btnSuit;// 述求
@property (nonatomic, strong) UIButton * btnNotice; //公告
@property (nonatomic, strong) STSmallBtnChoice * btnMySuit; //我的述求
@property (nonatomic, strong) STSmallBtnChoice * btnAccountBind; //账号绑定
@property (nonatomic, strong) STBtnChoice * btnKnowledge; //知识查询
@end

@implementation STRootViewVC

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    self.title = @"揭阳政务";
    [self initview];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view setBackgroundColor:BUTTONBACKCOLOR];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}
#pragma mark - 私有方法
- (void)initview{

    [self.view addSubview:self.imView];
    [self.view addSubview:self.btnSuit];
    [self.view addSubview:self.btnNotice];
    [self.view addSubview:self.btnMySuit];
    [self.view addSubview:self.btnAccountBind];
    [self.view addSubview:self.btnKnowledge];
    __weak typeof(self) ws = self;
    [self.imView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view);
        make.right.mas_equalTo(ws.view);
        make.height.mas_equalTo(160 * sHeight);
        make.top.mas_equalTo(ws.view.mas_top).with.offset(64);
    }];
    [self.btnSuit mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(8);
        make.top.mas_equalTo(ws.imView.mas_bottom).with.offset(8);
        make.width.mas_equalTo(WIDTH*0.5-12);
        make.height.mas_equalTo(140 * sHeight);
    }];
    [self.btnNotice mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.btnSuit.mas_right).with.offset(8);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-8);
        make.top.equalTo(ws.btnSuit);
        make.height.mas_equalTo(60* sHeight);
    }];
    [self.btnMySuit mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.view.mas_left).with.offset(8);
        make.top.mas_equalTo(ws.btnSuit.mas_bottom).with.offset(8);
        make.bottom.mas_equalTo(ws.view.mas_bottom).with.offset(-10);
        make.width.mas_equalTo(WIDTH*0.25-10);
    }];
    [self.btnAccountBind mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.btnMySuit.mas_right).with.offset(8);
        make.top.mas_equalTo(ws.btnSuit.mas_bottom).with.offset(8);
        make.bottom.mas_equalTo(ws.view.mas_bottom).with.offset(-10);
        make.width.mas_equalTo(WIDTH*0.25-10);
    }];
    [self.btnKnowledge mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(ws.btnSuit.mas_right).with.offset(8);
        make.right.mas_equalTo(ws.view.mas_right).with.offset(-8);
        make.top.mas_equalTo(ws.btnNotice.mas_bottom).with.offset(8);
        make.bottom.mas_equalTo(ws.view.mas_bottom).with.offset(-10);
    }];
  
}
#pragma mrak - setter
- (UIImageView*)imView{
    if (!_imView) {
        _imView = [[UIImageView alloc]init];
        [_imView setImage:[UIImage imageNamed:@"homepage_bg"]];
    }
    return _imView;
}

- (UIButton *)btnNotice {
    if (!_btnNotice) {
        CGSize size;
        size = CGSizeMake((WIDTH-12)*0.2, (WIDTH-12)*0.2);

        UIImage * scalImage = [UIImage imageNamed:@"homepage_bt_announcement"];
        _btnNotice = [[UIButton alloc]init];
        _btnNotice.backgroundColor = [UIColor whiteColor];
        [_btnNotice setTitle:@"   最新公告" forState:UIControlStateNormal];
        [_btnNotice setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        _btnNotice.titleLabel.font = AppleFont(15);
        [_btnNotice setImage:[scalImage scaleToSize:size] forState:UIControlStateNormal];
        _btnNotice.layer.masksToBounds = YES;
        _btnNotice.layer.cornerRadius = 2.0f;
        [_btnNotice setTag:BUTTONNOTICE];
        [_btnNotice addTarget:self action:@selector(rootBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnNotice;
}
- (STBtnChoice *)btnSuit {
    if (!_btnSuit) {
        _btnSuit = [[STBtnChoice alloc]init];
        [_btnSuit.labTitle setText:@"我要诉求"];
        [_btnSuit.imHeadView setImage:[UIImage imageNamed:@"homepage_bt_appeal"]];
        _btnSuit.layer.masksToBounds = YES;
        _btnSuit.layer.cornerRadius = 2.0f;
        _btnSuit.tag = BUTTONSUIT;
        [_btnSuit addTarget:self action:@selector(rootBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnSuit;
}
- (STSmallBtnChoice *)btnMySuit {
    if (!_btnMySuit) {
        _btnMySuit = [[STSmallBtnChoice alloc]init];
        [_btnMySuit.labTitle setText:@"我的诉求"];
        [_btnMySuit.imHeadView setImage:[UIImage imageNamed:@"homepage_bt_mine"]];
        _btnMySuit.layer.masksToBounds = YES;
        _btnMySuit.layer.cornerRadius = 2.0f;
        [_btnMySuit setTag:BUTTONMYSUIT];
        [_btnMySuit addTarget:self action:@selector(rootBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnMySuit;
}
- (STSmallBtnChoice *)btnAccountBind {
    if (!_btnAccountBind) {
        _btnAccountBind = [[STSmallBtnChoice alloc]init];
        [_btnAccountBind.labTitle setText:@"账号绑定"];
        [_btnAccountBind.imHeadView setImage:[UIImage imageNamed:@"homepage_bt_relevance"]];
        _btnAccountBind.layer.masksToBounds = YES;
        _btnAccountBind.layer.cornerRadius = 2.0f;
        [_btnAccountBind setTag:BUTTONACCOUTNBIND];
        [_btnAccountBind addTarget:self action:@selector(rootBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnAccountBind;
}
- (STBtnChoice *)btnKnowledge {
    if (!_btnKnowledge) {
        _btnKnowledge = [[STBtnChoice alloc]init];
        [_btnKnowledge.labTitle setText:@"知识查询"];
        [_btnKnowledge.imHeadView setImage:[UIImage imageNamed:@"homepage_bt_knowledge"]];
        _btnKnowledge.layer.masksToBounds = YES;
        _btnKnowledge.layer.cornerRadius = 2.0f;
        [_btnKnowledge setTag:BUTTONKNOWLEDGE];;
        [_btnKnowledge addTarget:self action:@selector(rootBtnClick:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btnKnowledge;
}
#pragma mark - 相应事件
- (void)rootBtnClick:(UIButton *)sender{
    switch (sender.tag - 1000) {
        case 0:{
//            [self needsuit];
//            [self httprequest];
            [self xmlText];
            break;
        }
        case 1:
        {
            [self newnotice];
            break;
        }
        case 2:{
            
            [self mysuit];
            break;
        }
        case 3:{
            [self accountBind];
            break;
        }
        case 4:{
            //知识库
            [self textBidng];
            break;
        }
        default:
            break;
    }
}
#pragma mark - 账号绑定
- (void)accountBind{
    STAccountBindVC * accoutn = [[STAccountBindVC alloc]init];
    [self.navigationController pushViewController:accoutn animated:YES];
}
#pragma make - 请求测试
- (void)httprequest{
    
//    NSString * path = [NSString stringWithFormat:@"%@%@",kBaseUrl,odOrder];
    NSString * path = @"http://172.16.71.165:9080/gzorderapinew/services/OrderApiService/odOrderQuery";
//    NSString * soap =
//    @"<?xml version=\"1.0\" encoding=\"utf-8\"?> \n"
//    "<soap12:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap12=\"http://www.w3.org/2003/05/soap-envelope\">"
//    "<soap12:Body>"
//    "<getSupportCity xmlns=\"http://WebXml.com.cn/\">"
//    "<byProvinceName>ALL</byProvinceName>"
//    "</getSupportCity>"
//    "</soap12:Body>"
//    "</soap12:Envelope>";
//    NSString *soapMessage = [NSString stringWithFormat:
//                             @"<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
//                             "<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">"
//                             "<soap:Body>\n"
//                             "<ns1:userLogon xmlns:ns1=\"http://localhost:8080/SampleWebService/webservice/HelloWorld/\">"
//                             "<arg0>%@</arg0>"
//                             "<arg1>%@</arg1>"
//                             "</ns1:userLogon>"
//                             "</soap:Body>\n"
//                             "</soap:Envelope>",@"1234567",@"23gtyu"];
     NSString * par  = @"YbrxiDniyb64+pmeRTQaMXuBn/utNzO/39IGFUEtGcLtE6n8A7FYU2cjHYJdQOUpdOtQoJ5weyEBbw73bsqc5C2kx10aSZOc5naWVUWI1N29BGnhsel54AZrBx56rwWknMaACaadc1DDfujZUT9ZA+Xh1PpvzEXAfKJ8mWTHfuOuqdoBvGxztyMC4B7+nZRjSmfBrW4xfRb/O1tcoMsYcc2kPvLb+dEFKP/ADoocqeqxxZTNNs58mYeDiH50lOTo";
    NSString *soapMessage = [NSString stringWithFormat:
                             @"<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
                             "<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">"
                             "<soap:Body>\n"
                             "<request>%@</request>"
                             "</soap:Body>\n"
                             "</soap:Envelope>",par];
     /*
    GDataXMLElement *rootElement = [GDataXMLNode elementWithName:@"requestData"];
    // 创建一个属性
//    GDataXMLElement *attribute = [GDataXMLNode attributeWithName:@"a" stringValue:@"b"];
    // 创建一个标签元素
    GDataXMLElement *element = [GDataXMLNode elementWithName:@"username" stringValue:@"080004"];
    GDataXMLElement *pass = [GDataXMLNode elementWithName:@"password" stringValue:@"654321"];
    GDataXMLElement *dealer = [GDataXMLNode elementWithName:@"dealer" stringValue:@"wenjun"];
    // 把标签与属性添加到根标签中
//    [rootElement addAttribute:attribute];
    
    [rootElement addChild:element];
    [rootElement addChild:pass];
    [rootElement addChild:dealer];
    // 生成xml文件内容
    GDataXMLDocument *xmlDoc = [[GDataXMLDocument alloc] initWithRootElement:rootElement];
    NSData *data1 = [xmlDoc XMLData];
    NSString *xmlString = [[NSString alloc] initWithData:data1 encoding:NSUTF8StringEncoding];
    
    xmlString = [xmlString substringFromIndex:22];
    
    STLog(@"%@\n",xmlString);
     */
    STLog(@"%@\n",path);
    
   
    
    [[STHttpquest getInstance] postWithUrl:path withParams:soapMessage success:^(id response) {
        STLog(@"sucess");
    } failure:^(NSError *error) {
        STLog(@"error");
    }];
}
#pragma mark - 我的诉求
- (void)mysuit{
    STMySuitVC * mysuit = [[STMySuitVC alloc]init];
    UINavigationController * nar = [[UINavigationController alloc]initWithRootViewController:mysuit];
    [self presentViewController:nar animated:NO completion:nil];
}
 
#pragma mark - 最新通知
- (void)newnotice{
    STNewNoticeVC * newno = [[STNewNoticeVC alloc]init];
    UINavigationController * nar = [[UINavigationController alloc]initWithRootViewController:newno];
    [self presentViewController:nar animated:NO completion:nil];
}
#pragma mark - 我要诉求
//- (void)needsuit{
//    STNeedSuitVC * needsuit = [[STNeedSuitVC alloc]init];
//    UINavigationController * nar = [[UINavigationController alloc]initWithRootViewController:needsuit];
//    [self presentViewController:nar animated:NO completion:nil];
//}
#pragma makr - 测试绑定
- (void)textBidng{
    STKnowledgeVC * knowle = [[STKnowledgeVC alloc]init];
    UINavigationController  *nar = [[UINavigationController alloc]initWithRootViewController:knowle];
    [self presentViewController:nar animated:NO completion:nil];
}
#pragma mark XML
- (void)xmlText{
//    NSString *soapBody =  [NSString stringWithFormat:@"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
//                           
//                           "<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">"
//                           
//                           "<soap:Body>"
//                           
//                           //------下面是xml-----//
//                           
//                           "<Request>"
//                           
//                           "<Header AllianceID=\"278639\" SID=\"739462\" TimeStamp=\"1450326295\" Signature=\"4639A23E98A9141EFFC639F483828C3C\" RequestType=\"OTA_FlightSearch\" AsyncRequest=\"false\" Timeout=\"0\" MessagePriority=\"3\"/>"
//                           
//                           "<HotelRequest>"
//                           
//                           "<RequestBody xmlns:ns=\"http://www.opentravel.org/OTA/2003/05\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">"
//                           
//                           "<FlightSearchRequest>"
//                           
//                           "<SearchType>%@</SearchType>"
//                           
//                           "<Routes>"
//                           
//                           "<FlightRoute>"
//                           
//                           "<DepartCity>%@</DepartCity>"
//                           
//                           "<ArriveCity>%@</ArriveCity>"
//                           
//                           "<DepartDate>%@</DepartDate>"
//                           
//                           "</FlightRoute>"
//                           
//                           "</Routes>"
//                           
//                           "<PriceTypeOptions>"
//                           
//                           "</PriceTypeOptions>"
//                           
//                           "<ProductTypeOptions>Normal</ProductTypeOptions>"
//                           
//                           "<Classgrade>%@</Classgrade>"
//                           
//                           "</FlightSearchRequest>"
//                           
//                           "</RequestBody>"
//                           
//                           "</HotelRequest>"
//                           
//                           "</Request>"
//                           
//                           //-----以上部分是xml-------//
//                           
//                           "</soap:Body>"
//                           "</soap:Envelope>",@"1",@"北京",@"广州",@"2016-08-11",@"2"];
    NSString * par  = @"YbrxiDniyb64+pmeRTQaMXuBn/utNzO/39IGFUEtGcLtE6n8A7FYU2cjHYJdQOUpdOtQoJ5weyEBbw73bsqc5C2kx10aSZOc5naWVUWI1N29BGnhsel54AZrBx56rwWknMaACaadc1DDfujZUT9ZA+Xh1PpvzEXAfKJ8mWTHfuOuqdoBvGxztyMC4B7+nZRjSmfBrW4xfRb/O1tcoMsYcc2kPvLb+dEFKP/ADoocqeqxxZTNNs58mYeDiH50lOTo";
    
    NSString *soapBody =  [NSString stringWithFormat:@"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
                           
                           "<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">"
                           
                           "<soap:Body>"
                           //------下面是xml-----//
                           "<request>%@</request>"
                           //-----以上部分是xml-------//
                           
                           "</soap:Body>"
                           "</soap:Envelope>",par];

    
    /*
     [urlRequest addValue: @"http://localhost:8080/SampleWebService/webservice/HelloWorld" forHTTPHeaderField:@"SOAPAction"];
     */
    
    NSString * path = @"http://172.16.71.165:9080/gzorderapinew/services/OrderApiService/odOrderQuery";
//    NSURL *url = [NSURL URLWithString:@"http://openapi.ctrip.com/Flight/DomesticFlight/OTA_FlightSearch.asmx"];
    NSURL * url = [NSURL URLWithString:path];
    NSMutableURLRequest *request=[NSMutableURLRequest requestWithURL:url];
    
    NSString *msgLength = [NSString stringWithFormat:@"%lu", (unsigned long)[soapBody length]];
    
    [request addValue:@"text/xml; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
    
    [request addValue: @"http://172.16.71.165:9080/gzorderapinew/services/OrderApiService/odOrderQuery" forHTTPHeaderField:@"SOAPAction"];
    
    [request addValue: msgLength forHTTPHeaderField:@"Content-Length"];
    
    [request setHTTPMethod:@"POST"];
    
    [request setHTTPBody:[soapBody dataUsingEncoding:NSUTF8StringEncoding]];
    
    NSURLConnection *connection=[[NSURLConnection alloc] initWithRequest:request delegate:self];
   
    if (connection) {
        NSLog(@"连接成功");
    }
    [connection start];
}
#pragma mark - 代理
- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error {
    STLog(@"error");
    STLog(@"%s",__func__);
}
- (void)connection:(NSURLConnection*)connection didReceiveData:(NSData*)data{
    
    NSLog(@"%@",data);
    
    NSString* strPartData=[[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    
    NSLog(@"=== %@", strPartData);
    
}
- (void)connectionDidFinishLoading:(NSURLConnection *)connection{
    STLog(@"%s",__func__);
}
#pragma mark - wsdl

@end
