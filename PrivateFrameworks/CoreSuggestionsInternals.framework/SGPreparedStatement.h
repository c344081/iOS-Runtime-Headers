/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPreparedStatement : NSObject <NSCopying> {
    SGSqliteDatabase *_owner;
    struct sqlite3_stmt { } *_stmt;
}

@property (nonatomic, readonly) struct sqlite3_stmt { }*stmt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithStatementPointer:(struct sqlite3_stmt { }*)arg1 owner:(id)arg2;
- (struct sqlite3_stmt { }*)stmt;

@end
