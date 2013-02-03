/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDocumentInfo;

@interface GMMKmlInfo : PBCodable {
    BOOL _hasIsUserCreated;
    BOOL _isUserCreated;
    GMMDocumentInfo *_sourceDocument;
}

@property BOOL hasIsUserCreated;
@property(readonly) BOOL hasSourceDocument;
@property BOOL isUserCreated;
@property(retain) GMMDocumentInfo * sourceDocument;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsUserCreated;
- (BOOL)hasSourceDocument;
- (BOOL)isUserCreated;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsUserCreated:(BOOL)arg1;
- (void)setIsUserCreated:(BOOL)arg1;
- (void)setSourceDocument:(id)arg1;
- (id)sourceDocument;
- (void)writeTo:(id)arg1;

@end