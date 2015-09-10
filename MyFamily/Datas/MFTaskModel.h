//
//  MFTaskModel.h
//  MyFamily
//
//  Created by EvenTouch on 15/9/10.
//  Copyright (c) 2015年 Linbo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class MFUser_TaskModel;

@interface MFTaskModel : NSManagedObject

@property (nonatomic, retain) NSString * content;
@property (nonatomic) NSTimeInterval endTime;
@property (nonatomic) NSTimeInterval startTime;
@property (nonatomic) int32_t status;
@property (nonatomic) int64_t taskID;
@property (nonatomic, retain) NSString * taskType;
@property (nonatomic, retain) NSString * title;
@property (nonatomic) NSTimeInterval x_createDate;
@property (nonatomic) NSTimeInterval x_deleteDate;
@property (nonatomic, retain) NSString * x_device;
@property (nonatomic) BOOL x_invalid;
@property (nonatomic) BOOL x_isDefault;
@property (nonatomic) BOOL x_isDelete;
@property (nonatomic, retain) NSString * x_remark;
@property (nonatomic) int64_t x_rowID;
@property (nonatomic) NSTimeInterval x_updateDate;
@property (nonatomic) int64_t x_userID_create;
@property (nonatomic) int64_t x_userID_delete;
@property (nonatomic) int64_t x_userID_update;
@property (nonatomic, retain) NSString * x_version;
@property (nonatomic) BOOL x_isSync;
@property (nonatomic, retain) NSSet *user_tasks;
@end

@interface MFTaskModel (CoreDataGeneratedAccessors)

- (void)addUser_tasksObject:(MFUser_TaskModel *)value;
- (void)removeUser_tasksObject:(MFUser_TaskModel *)value;
- (void)addUser_tasks:(NSSet *)values;
- (void)removeUser_tasks:(NSSet *)values;

@end
