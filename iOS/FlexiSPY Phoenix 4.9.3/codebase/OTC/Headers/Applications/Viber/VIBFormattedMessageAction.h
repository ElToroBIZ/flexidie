/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "MTLModel.h"

//#import "MTLJSONSerializing-Protocol.h"

@class NSDictionary, NSString;

@interface VIBFormattedMessageAction : NSObject //MTLModel <MTLJSONSerializing>
{
    NSString *_name;
    NSDictionary *_parameters;
}

+ (id)parametersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
//- (void).cxx_destruct;

@end
