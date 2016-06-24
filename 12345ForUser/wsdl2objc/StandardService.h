#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class StandardService_bzHoOrderQuery;
@class StandardService_bzHoOrderQueryResponse;
@class StandardService_bzUserDataQuery;
@class StandardService_bzUserDataQueryResponse;
@class StandardService_bzBranchQuery;
@class StandardService_bzBranchQueryResponse;
@class StandardService_bzAuditOrder;
@class StandardService_bzAuditOrderResponse;
@class StandardService_bzOrderDetailQuery;
@class StandardService_bzOrderDetailQueryResponse;
@class StandardService_bzOrderTaskQuery;
@class StandardService_bzOrderTaskQueryResponse;
@class StandardService_bzSendOrder;
@class StandardService_bzSendOrderResponse;
@class StandardService_bzReturnOrder;
@class StandardService_bzReturnOrderResponse;
@class StandardService_bzAuditOrderQuery;
@class StandardService_bzAuditOrderQueryResponse;
@class StandardService_bzReturnOrderQuery;
@class StandardService_bzReturnOrderQueryResponse;
@class StandardService_bzSentOrderQuery;
@class StandardService_bzSentOrderQueryResponse;
@class StandardService_bzOrderQuery;
@class StandardService_bzOrderQueryResponse;
@class StandardService_bzMenuCountQuery;
@class StandardService_bzMenuCountQueryResponse;
@class StandardService_bzSendLeaderOrder;
@class StandardService_bzSendLeaderOrderResponse;
@class StandardService_bzUnLockVisitUser;
@class StandardService_bzUnLockVisitUserResponse;
@class StandardService_bzCoOrderQuery;
@class StandardService_bzCoOrderQueryResponse;
@class StandardService_bzCcOrderQuery;
@class StandardService_bzCcOrderQueryResponse;
@class StandardService_bzDeferOrder;
@class StandardService_bzDeferOrderResponse;
@class StandardService_bzDeferOrderQuery;
@class StandardService_bzDeferOrderQueryResponse;
@class StandardService_bzDeferOrderDetail;
@class StandardService_bzDeferOrderDetailResponse;
@class StandardService_bzDeferOrderVerify;
@class StandardService_bzDeferOrderVerifyResponse;
@class StandardService_bzDeptStaffQuery;
@class StandardService_bzDeptStaffQueryResponse;
@class StandardService_bzSendSMS;
@class StandardService_bzSendSMSResponse;
@class StandardService_bzAssistOrder;
@class StandardService_bzAssistOrderResponse;
@class StandardService_bzAcceptStats;
@class StandardService_bzAcceptStatsResponse;
@class StandardService_bzPerformanceStats;
@class StandardService_bzPerformanceStatsResponse;
@class StandardService_bzSuperviseOrderQuery;
@class StandardService_bzSuperviseOrderQueryResponse;
@class StandardService_feedback;
@class StandardService_feedbackResponse;
@class StandardService_attachment;
@class StandardService_attachmentResponse;
@class StandardService_bzGetOrderFile;
@class StandardService_bzGetOrderFileResponse;
@class StandardService_bzCallHistory;
@class StandardService_bzCallHistoryResponse;
@class StandardService_bzUrgentOrderQuery;
@class StandardService_bzUrgentOrderQueryResponse;
@class StandardService_bzIsDeferCancel;
@class StandardService_bzIsDeferCancelResponse;
@interface StandardService_bzHoOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzHoOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzHoOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzHoOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzUserDataQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzUserDataQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzUserDataQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzUserDataQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzBranchQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzBranchQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzBranchQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzBranchQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAuditOrder : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAuditOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAuditOrderResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAuditOrderResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzOrderDetailQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzOrderDetailQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzOrderDetailQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzOrderDetailQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzOrderTaskQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzOrderTaskQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzOrderTaskQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzOrderTaskQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSendOrder : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSendOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSendOrderResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSendOrderResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzReturnOrder : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzReturnOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzReturnOrderResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzReturnOrderResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAuditOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAuditOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAuditOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAuditOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzReturnOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzReturnOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzReturnOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzReturnOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSentOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSentOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSentOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSentOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzMenuCountQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzMenuCountQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzMenuCountQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzMenuCountQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSendLeaderOrder : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSendLeaderOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSendLeaderOrderResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSendLeaderOrderResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzUnLockVisitUser : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzUnLockVisitUser *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzUnLockVisitUserResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzUnLockVisitUserResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzCoOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzCoOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzCoOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzCoOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzCcOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzCcOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzCcOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzCcOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrder : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrderResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrderResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrderDetail : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrderDetail *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrderDetailResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrderDetailResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrderVerify : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrderVerify *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeferOrderVerifyResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeferOrderVerifyResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeptStaffQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeptStaffQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzDeptStaffQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzDeptStaffQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSendSMS : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSendSMS *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSendSMSResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSendSMSResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAssistOrder : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAssistOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAssistOrderResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAssistOrderResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAcceptStats : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAcceptStats *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzAcceptStatsResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzAcceptStatsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzPerformanceStats : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzPerformanceStats *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzPerformanceStatsResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzPerformanceStatsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSuperviseOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSuperviseOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzSuperviseOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzSuperviseOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_feedback : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_feedback *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_feedbackResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_feedbackResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_attachment : NSObject {
	
/* elements */
	NSString * requestData;
	NSData * bytes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_attachment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
@property (retain) NSData * bytes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_attachmentResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_attachmentResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzGetOrderFile : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzGetOrderFile *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzGetOrderFileResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzGetOrderFileResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzCallHistory : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzCallHistory *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzCallHistoryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzCallHistoryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzUrgentOrderQuery : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzUrgentOrderQuery *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzUrgentOrderQueryResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzUrgentOrderQueryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzIsDeferCancel : NSObject {
	
/* elements */
	NSString * requestData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzIsDeferCancel *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * requestData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface StandardService_bzIsDeferCancelResponse : NSObject {
	
/* elements */
	NSString * responseData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (StandardService_bzIsDeferCancelResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * responseData;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "ns1.h"
#import "StandardService.h"
#import "tns1.h"
@class StandardServiceSoapBinding;
@interface StandardService : NSObject {
	
}
+ (StandardServiceSoapBinding *)StandardServiceSoapBinding;
@end
@class StandardServiceSoapBindingResponse;
@class StandardServiceSoapBindingOperation;
@protocol StandardServiceSoapBindingResponseDelegate <NSObject>
- (void) operation:(StandardServiceSoapBindingOperation *)operation completedWithResponse:(StandardServiceSoapBindingResponse *)response;
@end
@interface StandardServiceSoapBinding : NSObject <StandardServiceSoapBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(StandardServiceSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (StandardServiceSoapBindingResponse *)bzHoOrderQueryUsingParameters:(StandardService_bzHoOrderQuery *)aParameters ;
- (void)bzHoOrderQueryAsyncUsingParameters:(StandardService_bzHoOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzUserDataQueryUsingParameters:(StandardService_bzUserDataQuery *)aParameters ;
- (void)bzUserDataQueryAsyncUsingParameters:(StandardService_bzUserDataQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzBranchQueryUsingParameters:(StandardService_bzBranchQuery *)aParameters ;
- (void)bzBranchQueryAsyncUsingParameters:(StandardService_bzBranchQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzAuditOrderUsingParameters:(StandardService_bzAuditOrder *)aParameters ;
- (void)bzAuditOrderAsyncUsingParameters:(StandardService_bzAuditOrder *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzOrderDetailQueryUsingParameters:(StandardService_bzOrderDetailQuery *)aParameters ;
- (void)bzOrderDetailQueryAsyncUsingParameters:(StandardService_bzOrderDetailQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzOrderTaskQueryUsingParameters:(StandardService_bzOrderTaskQuery *)aParameters ;
- (void)bzOrderTaskQueryAsyncUsingParameters:(StandardService_bzOrderTaskQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzSendOrderUsingParameters:(StandardService_bzSendOrder *)aParameters ;
- (void)bzSendOrderAsyncUsingParameters:(StandardService_bzSendOrder *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzReturnOrderUsingParameters:(StandardService_bzReturnOrder *)aParameters ;
- (void)bzReturnOrderAsyncUsingParameters:(StandardService_bzReturnOrder *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzAuditOrderQueryUsingParameters:(StandardService_bzAuditOrderQuery *)aParameters ;
- (void)bzAuditOrderQueryAsyncUsingParameters:(StandardService_bzAuditOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzReturnOrderQueryUsingParameters:(StandardService_bzReturnOrderQuery *)aParameters ;
- (void)bzReturnOrderQueryAsyncUsingParameters:(StandardService_bzReturnOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzSentOrderQueryUsingParameters:(StandardService_bzSentOrderQuery *)aParameters ;
- (void)bzSentOrderQueryAsyncUsingParameters:(StandardService_bzSentOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzOrderQueryUsingParameters:(StandardService_bzOrderQuery *)aParameters ;
- (void)bzOrderQueryAsyncUsingParameters:(StandardService_bzOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzMenuCountQueryUsingParameters:(StandardService_bzMenuCountQuery *)aParameters ;
- (void)bzMenuCountQueryAsyncUsingParameters:(StandardService_bzMenuCountQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzSendLeaderOrderUsingParameters:(StandardService_bzSendLeaderOrder *)aParameters ;
- (void)bzSendLeaderOrderAsyncUsingParameters:(StandardService_bzSendLeaderOrder *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzUnLockVisitUserUsingParameters:(StandardService_bzUnLockVisitUser *)aParameters ;
- (void)bzUnLockVisitUserAsyncUsingParameters:(StandardService_bzUnLockVisitUser *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzCoOrderQueryUsingParameters:(StandardService_bzCoOrderQuery *)aParameters ;
- (void)bzCoOrderQueryAsyncUsingParameters:(StandardService_bzCoOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzCcOrderQueryUsingParameters:(StandardService_bzCcOrderQuery *)aParameters ;
- (void)bzCcOrderQueryAsyncUsingParameters:(StandardService_bzCcOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzDeferOrderUsingParameters:(StandardService_bzDeferOrder *)aParameters ;
- (void)bzDeferOrderAsyncUsingParameters:(StandardService_bzDeferOrder *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzDeferOrderQueryUsingParameters:(StandardService_bzDeferOrderQuery *)aParameters ;
- (void)bzDeferOrderQueryAsyncUsingParameters:(StandardService_bzDeferOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzDeferOrderDetailUsingParameters:(StandardService_bzDeferOrderDetail *)aParameters ;
- (void)bzDeferOrderDetailAsyncUsingParameters:(StandardService_bzDeferOrderDetail *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzDeferOrderVerifyUsingParameters:(StandardService_bzDeferOrderVerify *)aParameters ;
- (void)bzDeferOrderVerifyAsyncUsingParameters:(StandardService_bzDeferOrderVerify *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzDeptStaffQueryUsingParameters:(StandardService_bzDeptStaffQuery *)aParameters ;
- (void)bzDeptStaffQueryAsyncUsingParameters:(StandardService_bzDeptStaffQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzSendSMSUsingParameters:(StandardService_bzSendSMS *)aParameters ;
- (void)bzSendSMSAsyncUsingParameters:(StandardService_bzSendSMS *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzAssistOrderUsingParameters:(StandardService_bzAssistOrder *)aParameters ;
- (void)bzAssistOrderAsyncUsingParameters:(StandardService_bzAssistOrder *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzAcceptStatsUsingParameters:(StandardService_bzAcceptStats *)aParameters ;
- (void)bzAcceptStatsAsyncUsingParameters:(StandardService_bzAcceptStats *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzPerformanceStatsUsingParameters:(StandardService_bzPerformanceStats *)aParameters ;
- (void)bzPerformanceStatsAsyncUsingParameters:(StandardService_bzPerformanceStats *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzSuperviseOrderQueryUsingParameters:(StandardService_bzSuperviseOrderQuery *)aParameters ;
- (void)bzSuperviseOrderQueryAsyncUsingParameters:(StandardService_bzSuperviseOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)feedbackUsingParameters:(StandardService_feedback *)aParameters ;
- (void)feedbackAsyncUsingParameters:(StandardService_feedback *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)attachmentUsingParameters:(StandardService_attachment *)aParameters ;
- (void)attachmentAsyncUsingParameters:(StandardService_attachment *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzGetOrderFileUsingParameters:(StandardService_bzGetOrderFile *)aParameters ;
- (void)bzGetOrderFileAsyncUsingParameters:(StandardService_bzGetOrderFile *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzCallHistoryUsingParameters:(StandardService_bzCallHistory *)aParameters ;
- (void)bzCallHistoryAsyncUsingParameters:(StandardService_bzCallHistory *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzUrgentOrderQueryUsingParameters:(StandardService_bzUrgentOrderQuery *)aParameters ;
- (void)bzUrgentOrderQueryAsyncUsingParameters:(StandardService_bzUrgentOrderQuery *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzIsDeferCancelUsingParameters:(StandardService_bzIsDeferCancel *)aParameters ;
- (void)bzIsDeferCancelAsyncUsingParameters:(StandardService_bzIsDeferCancel *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)sendRequestUsingParameters:(tns1_sendRequest *)aParameters ;
- (void)sendRequestAsyncUsingParameters:(tns1_sendRequest *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)getDefaultResultUsingParameters:(tns1_getDefaultResult *)aParameters ;
- (void)getDefaultResultAsyncUsingParameters:(tns1_getDefaultResult *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)bzAnswerSuperviseUsingParameters:(tns1_bzAnswerSupervise *)aParameters ;
- (void)bzAnswerSuperviseAsyncUsingParameters:(tns1_bzAnswerSupervise *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
- (StandardServiceSoapBindingResponse *)call_invokeUsingParameters:(tns1_call_invoke *)aParameters ;
- (void)call_invokeAsyncUsingParameters:(tns1_call_invoke *)aParameters  delegate:(id<StandardServiceSoapBindingResponseDelegate>)responseDelegate;
@end
@interface StandardServiceSoapBindingOperation : NSOperation {
	StandardServiceSoapBinding *binding;
	StandardServiceSoapBindingResponse *response;
	id<StandardServiceSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) StandardServiceSoapBinding *binding;
@property (readonly) StandardServiceSoapBindingResponse *response;
@property (nonatomic, assign) id<StandardServiceSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate;
@end
@interface StandardServiceSoapBinding_bzHoOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzHoOrderQuery * parameters;
}
@property (retain) StandardService_bzHoOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzHoOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzUserDataQuery : StandardServiceSoapBindingOperation {
	StandardService_bzUserDataQuery * parameters;
}
@property (retain) StandardService_bzUserDataQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzUserDataQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzBranchQuery : StandardServiceSoapBindingOperation {
	StandardService_bzBranchQuery * parameters;
}
@property (retain) StandardService_bzBranchQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzBranchQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzAuditOrder : StandardServiceSoapBindingOperation {
	StandardService_bzAuditOrder * parameters;
}
@property (retain) StandardService_bzAuditOrder * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzAuditOrder *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzOrderDetailQuery : StandardServiceSoapBindingOperation {
	StandardService_bzOrderDetailQuery * parameters;
}
@property (retain) StandardService_bzOrderDetailQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzOrderDetailQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzOrderTaskQuery : StandardServiceSoapBindingOperation {
	StandardService_bzOrderTaskQuery * parameters;
}
@property (retain) StandardService_bzOrderTaskQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzOrderTaskQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzSendOrder : StandardServiceSoapBindingOperation {
	StandardService_bzSendOrder * parameters;
}
@property (retain) StandardService_bzSendOrder * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzSendOrder *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzReturnOrder : StandardServiceSoapBindingOperation {
	StandardService_bzReturnOrder * parameters;
}
@property (retain) StandardService_bzReturnOrder * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzReturnOrder *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzAuditOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzAuditOrderQuery * parameters;
}
@property (retain) StandardService_bzAuditOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzAuditOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzReturnOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzReturnOrderQuery * parameters;
}
@property (retain) StandardService_bzReturnOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzReturnOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzSentOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzSentOrderQuery * parameters;
}
@property (retain) StandardService_bzSentOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzSentOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzOrderQuery * parameters;
}
@property (retain) StandardService_bzOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzMenuCountQuery : StandardServiceSoapBindingOperation {
	StandardService_bzMenuCountQuery * parameters;
}
@property (retain) StandardService_bzMenuCountQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzMenuCountQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzSendLeaderOrder : StandardServiceSoapBindingOperation {
	StandardService_bzSendLeaderOrder * parameters;
}
@property (retain) StandardService_bzSendLeaderOrder * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzSendLeaderOrder *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzUnLockVisitUser : StandardServiceSoapBindingOperation {
	StandardService_bzUnLockVisitUser * parameters;
}
@property (retain) StandardService_bzUnLockVisitUser * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzUnLockVisitUser *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzCoOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzCoOrderQuery * parameters;
}
@property (retain) StandardService_bzCoOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzCoOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzCcOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzCcOrderQuery * parameters;
}
@property (retain) StandardService_bzCcOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzCcOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzDeferOrder : StandardServiceSoapBindingOperation {
	StandardService_bzDeferOrder * parameters;
}
@property (retain) StandardService_bzDeferOrder * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzDeferOrder *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzDeferOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzDeferOrderQuery * parameters;
}
@property (retain) StandardService_bzDeferOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzDeferOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzDeferOrderDetail : StandardServiceSoapBindingOperation {
	StandardService_bzDeferOrderDetail * parameters;
}
@property (retain) StandardService_bzDeferOrderDetail * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzDeferOrderDetail *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzDeferOrderVerify : StandardServiceSoapBindingOperation {
	StandardService_bzDeferOrderVerify * parameters;
}
@property (retain) StandardService_bzDeferOrderVerify * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzDeferOrderVerify *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzDeptStaffQuery : StandardServiceSoapBindingOperation {
	StandardService_bzDeptStaffQuery * parameters;
}
@property (retain) StandardService_bzDeptStaffQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzDeptStaffQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzSendSMS : StandardServiceSoapBindingOperation {
	StandardService_bzSendSMS * parameters;
}
@property (retain) StandardService_bzSendSMS * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzSendSMS *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzAssistOrder : StandardServiceSoapBindingOperation {
	StandardService_bzAssistOrder * parameters;
}
@property (retain) StandardService_bzAssistOrder * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzAssistOrder *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzAcceptStats : StandardServiceSoapBindingOperation {
	StandardService_bzAcceptStats * parameters;
}
@property (retain) StandardService_bzAcceptStats * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzAcceptStats *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzPerformanceStats : StandardServiceSoapBindingOperation {
	StandardService_bzPerformanceStats * parameters;
}
@property (retain) StandardService_bzPerformanceStats * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzPerformanceStats *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzSuperviseOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzSuperviseOrderQuery * parameters;
}
@property (retain) StandardService_bzSuperviseOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzSuperviseOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_feedback : StandardServiceSoapBindingOperation {
	StandardService_feedback * parameters;
}
@property (retain) StandardService_feedback * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_feedback *)aParameters
;
@end
@interface StandardServiceSoapBinding_attachment : StandardServiceSoapBindingOperation {
	StandardService_attachment * parameters;
}
@property (retain) StandardService_attachment * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_attachment *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzGetOrderFile : StandardServiceSoapBindingOperation {
	StandardService_bzGetOrderFile * parameters;
}
@property (retain) StandardService_bzGetOrderFile * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzGetOrderFile *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzCallHistory : StandardServiceSoapBindingOperation {
	StandardService_bzCallHistory * parameters;
}
@property (retain) StandardService_bzCallHistory * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzCallHistory *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzUrgentOrderQuery : StandardServiceSoapBindingOperation {
	StandardService_bzUrgentOrderQuery * parameters;
}
@property (retain) StandardService_bzUrgentOrderQuery * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzUrgentOrderQuery *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzIsDeferCancel : StandardServiceSoapBindingOperation {
	StandardService_bzIsDeferCancel * parameters;
}
@property (retain) StandardService_bzIsDeferCancel * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(StandardService_bzIsDeferCancel *)aParameters
;
@end
@interface StandardServiceSoapBinding_sendRequest : StandardServiceSoapBindingOperation {
	tns1_sendRequest * parameters;
}
@property (retain) tns1_sendRequest * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(tns1_sendRequest *)aParameters
;
@end
@interface StandardServiceSoapBinding_getDefaultResult : StandardServiceSoapBindingOperation {
	tns1_getDefaultResult * parameters;
}
@property (retain) tns1_getDefaultResult * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(tns1_getDefaultResult *)aParameters
;
@end
@interface StandardServiceSoapBinding_bzAnswerSupervise : StandardServiceSoapBindingOperation {
	tns1_bzAnswerSupervise * parameters;
}
@property (retain) tns1_bzAnswerSupervise * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(tns1_bzAnswerSupervise *)aParameters
;
@end
@interface StandardServiceSoapBinding_call_invoke : StandardServiceSoapBindingOperation {
	tns1_call_invoke * parameters;
}
@property (retain) tns1_call_invoke * parameters;
- (id)initWithBinding:(StandardServiceSoapBinding *)aBinding delegate:(id<StandardServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(tns1_call_invoke *)aParameters
;
@end
@interface StandardServiceSoapBinding_envelope : NSObject {
}
+ (StandardServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface StandardServiceSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
