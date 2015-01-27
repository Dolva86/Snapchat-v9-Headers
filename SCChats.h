//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCFetchableList.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, SCChat;

@interface SCChats : NSObject <SCFetchableList, NSCoding>
{
    BOOL _clearing;
    BOOL _failedToLoadMoreChats;
    BOOL _loadingMoreChats;
    BOOL _moreChatsToLoad;
    BOOL _shouldUnarchiveChats;
    BOOL _firstChatServerLoad;
    BOOL _excessChatsArchived;
    NSString *_activeChatRecipientBeforeBackgrounded;
    NSArray *_chatsAndUnstartedChats;
    NSString *_username;
    SCChat *_visibleChatInChatView;
    NSMutableDictionary *_chats;
    NSArray *_clearableChatsCache;
    NSString *_iterToken;
    NSDate *_lastCleanClearedMessagesDate;
    unsigned int _numUnreadArchivedChats;
    NSMutableArray *_unstartedChats;
    NSMutableDictionary *_unstartedChatsDictionary;
    double _lastFullUpdateTime;
}

+ (id)additionalChatsPath;
+ (id)chatsWithUsername:(id)arg1 fromResponse:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *unstartedChatsDictionary; // @synthesize unstartedChatsDictionary=_unstartedChatsDictionary;
@property(retain, nonatomic) NSMutableArray *unstartedChats; // @synthesize unstartedChats=_unstartedChats;
@property(nonatomic) unsigned int numUnreadArchivedChats; // @synthesize numUnreadArchivedChats=_numUnreadArchivedChats;
@property(nonatomic) BOOL excessChatsArchived; // @synthesize excessChatsArchived=_excessChatsArchived;
@property(nonatomic) BOOL firstChatServerLoad; // @synthesize firstChatServerLoad=_firstChatServerLoad;
@property(nonatomic) BOOL shouldUnarchiveChats; // @synthesize shouldUnarchiveChats=_shouldUnarchiveChats;
@property(nonatomic) double lastFullUpdateTime; // @synthesize lastFullUpdateTime=_lastFullUpdateTime;
@property(retain, nonatomic) NSDate *lastCleanClearedMessagesDate; // @synthesize lastCleanClearedMessagesDate=_lastCleanClearedMessagesDate;
@property(copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
@property(retain, nonatomic) NSArray *clearableChatsCache; // @synthesize clearableChatsCache=_clearableChatsCache;
@property(retain, nonatomic) NSMutableDictionary *chats; // @synthesize chats=_chats;
@property(retain, nonatomic) SCChat *visibleChatInChatView; // @synthesize visibleChatInChatView=_visibleChatInChatView;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) BOOL moreChatsToLoad; // @synthesize moreChatsToLoad=_moreChatsToLoad;
@property(nonatomic, getter=isLoadingMoreChats) BOOL loadingMoreChats; // @synthesize loadingMoreChats=_loadingMoreChats;
@property(nonatomic) BOOL failedToLoadMoreChats; // @synthesize failedToLoadMoreChats=_failedToLoadMoreChats;
@property(nonatomic, getter=isClearing) BOOL clearing; // @synthesize clearing=_clearing;
@property(retain, nonatomic) NSArray *chatsAndUnstartedChats; // @synthesize chatsAndUnstartedChats=_chatsAndUnstartedChats;
@property(retain, nonatomic) NSString *activeChatRecipientBeforeBackgrounded; // @synthesize activeChatRecipientBeforeBackgrounded=_activeChatRecipientBeforeBackgrounded;
- (void).cxx_destruct;
- (void)initializeUnstartedChats;
- (void)resetChatsAndUnstartedChats;
- (void)resetAllUnstartedChats;
- (void)removeUnstartedChatForRecipient:(id)arg1;
- (void)addUnstartedChatForRecipient:(id)arg1;
- (id)chatRecipientToRemoveFromUnstartedChats:(id)arg1;
- (id)chatRecipientToAddToUnstartedChats:(id)arg1;
- (void)updateUnstartedChatsIfNecessaryWithInfo:(id)arg1;
- (id)unstartedChatForRecipient:(id)arg1;
- (BOOL)isRecipientInUnstartedChats:(id)arg1;
- (void)getUnstartedChatsWithBlock:(CDUnknownBlockType)arg1;
- (void)clearChatForBlockedFriend:(id)arg1;
- (void)removeAllChats;
- (void)removeChat:(id)arg1;
- (void)clearChat:(id)arg1;
- (void)clearAll;
- (void)cleanUpClearedMessages;
- (void)releaseLeftoverMessages;
- (void)handleRemoteNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadMoreChatsFromServer;
- (void)loadMoreChats;
- (void)removeOldChats;
- (void)removeSentGroupSnaps;
- (BOOL)removeInvalidChats;
- (void)removeExpiredMessages;
- (void)retryFailedScreenshotMessages;
- (void)sendSnapState:(id)arg1;
- (void)sendMedia:(id)arg1;
- (id)allChats;
- (id)clearableChats;
- (id)orderedChats;
- (id)uniqueChats;
- (id)findOrCreateChatForUsername:(id)arg1;
- (id)chatForUsername:(id)arg1;
- (BOOL)firstChatHasLoadedSnap;
- (BOOL)hasUnviewedChats;
- (BOOL)hasUnviewedCash;
- (BOOL)hasUnviewedSnaps;
- (int)unreadCountForChats:(id)arg1;
- (int)unreadCount;
- (int)count;
- (void)updateSnap:(id)arg1 oldSnap:(id)arg2;
- (void)removeSnap:(id)arg1;
- (void)addSnap:(id)arg1;
- (id)startNewChatWithRecipient:(id)arg1;
- (id)startNewChatWithRecipient:(id)arg1 triggeredByNotification:(BOOL)arg2;
- (BOOL)fetchUpdatesToUpdateReadsIfNecessaryForChat:(id)arg1;
- (void)receivedChatPersistedPushForChatId:(id)arg1 sender:(id)arg2;
- (BOOL)shouldAcceptMessageFromSender:(id)arg1;
- (void)updateWithTCPJSONResponse:(id)arg1;
- (void)appendChats:(id)arg1 shouldUpdate:(BOOL)arg2;
- (void)updateWithChat:(id)arg1;
- (void)updateWithChats:(id)arg1 lastTimestamp:(id)arg2;
- (void)tcpConnected;
- (void)tcpDisconnected;
- (void)pruneChats;
- (void)chatsDidChange;
- (void)unarchiveAdditionalChats;
- (BOOL)archiveChatsWithoutChats:(id)arg1 withCoder:(id)arg2;
- (void)ensureNonNilObjects;
- (id)initWithCoder:(id)arg1;
- (void)saveChatsAndIterTokenWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithUsername:(id)arg1;
- (id)init;
- (int)fetchableCount;
- (void)loadMoreItems;
- (BOOL)failedToLoadMoreItems;
- (BOOL)moreItemsToLoad;
- (BOOL)canLoadMoreItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

