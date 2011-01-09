/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSPredicateOperator : NSObject <NSCoding, NSCopying>
{
    NSUInteger _operatorType;
    NSUInteger _modifier;
}

+ (id)_getSymbolForType:(NSUInteger)arg1;
+ (SEL)_getSelectorForType:(NSUInteger)arg1;
+ (id)operatorWithType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 options:(NSUInteger)arg3;
+ (id)_newOperatorWithType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 options:(NSUInteger)arg3;
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(NSUInteger)arg2;

- (id)initWithOperatorType:(NSUInteger)arg1;
- (id)initWithOperatorType:(NSUInteger)arg1 modifier:(NSUInteger)arg2;
- (id)initWithOperatorType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 options:(NSUInteger)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)predicateFormat;
- (id)description;
- (SEL)selector;
- (NSUInteger)operatorType;
- (id)symbol;
- (NSUInteger)modifier;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (void)_setOptions:(NSUInteger)arg1;
- (NSUInteger)options;
- (void)_setModifier:(NSUInteger)arg1;

@end