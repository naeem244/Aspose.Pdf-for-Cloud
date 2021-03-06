#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol ASPTiffExportOptions
@end

@interface ASPTiffExportOptions : ASPObject


@property(nonatomic) NSNumber* brightness;

@property(nonatomic) NSString* compression;

@property(nonatomic) NSString* colorDepth;

@property(nonatomic) NSNumber* leftMargin;

@property(nonatomic) NSNumber* rightMargin;

@property(nonatomic) NSNumber* topMargin;

@property(nonatomic) NSNumber* bottomMargin;

@property(nonatomic) NSString* orientation;

@property(nonatomic) NSNumber* skipBlankPages;

@property(nonatomic) NSNumber* width;

@property(nonatomic) NSNumber* height;

@property(nonatomic) NSNumber* xResolution;

@property(nonatomic) NSNumber* yResolution;

@property(nonatomic) NSNumber* pageIndex;

@property(nonatomic) NSNumber* pageCount;

@property(nonatomic) NSString* resultFile;

@end
