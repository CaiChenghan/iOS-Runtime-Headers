/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDataProvider, NSDictionary, NSString, NSData, NSCountedSet, NSHTTPURLResponse, NSMutableData, NSURLConnection, NSURL;



@interface ISURLOperation : ISOperation 
{
    NSData *_body;
    NSUInteger _cachePolicy;
    NSURLConnection *_connection;
    NSDictionary *_customHeaders;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    NSString *_method;
    NSUInteger _minimumNetworkType;
    NSInteger _networkRetryCount;
    NSDictionary *_queryStringDictionary;
    NSCountedSet *_redirectURLs;
    NSHTTPURLResponse *_response;
    NSURL *_url;
    BOOL _waitForMinimumNetworkType;
}

@property(retain) NSURL *url;
@property BOOL shouldWaitForMinimumNetworkType;
@property(retain) NSHTTPURLResponse *response;
@property(retain) NSDictionary *queryStringDictionary;
@property NSUInteger minimumNetworkType;
@property(retain) NSString *method;
@property(retain) ISDataProvider *dataProvider;
@property(retain) NSDictionary *customHeaders;
@property NSUInteger cachePolicy;
@property(retain) NSData *body;
@property <ISURLOperationDelegate> *delegate;

+ (id)copyUserAgent;

- (id)init;
- (void)dealloc;
- (void)run;
- (id)createRequest;
- (BOOL)handleRedirectFromDataProvider:(id)arg1;
- (void)handleResponse:(id)arg1;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_networkTypeChanged:(id)arg1;
- (id)_copyAcceptLanguageString;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (void)_logHeadersForRequest:(id)arg1;
- (void)_retry;
- (void)_run;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_stopConnection;
- (void)_updateProgress;
- (BOOL)_waitForMinimumNetworkTypeWithError:(id*)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)shouldWaitForMinimumNetworkType;
- (void)setShouldWaitForMinimumNetworkType:(BOOL)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)queryStringDictionary;
- (void)setQueryStringDictionary:(id)arg1;
- (NSUInteger)minimumNetworkType;
- (void)setMinimumNetworkType:(NSUInteger)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)customHeaders;
- (void)setCustomHeaders:(id)arg1;
- (NSUInteger)cachePolicy;
- (void)setCachePolicy:(NSUInteger)arg1;
- (id)body;
- (void)setBody:(id)arg1;

@end