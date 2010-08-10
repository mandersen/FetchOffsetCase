//
//  Event.h
//  FetchOffsetCase
//
//  Created by Matt Andersen on 2010-08-09.
//  Copyright 2010 Arevit Solutions, Inc. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Event :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * timeStamp;

@end



