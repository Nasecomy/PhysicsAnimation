//
//  PAStackPicsView.h
//  
//
//  Created by admin on 12/23/11.
//  Copyright (c) 2011 vlad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PAStackPicView.h"

@interface PAStackPicsView : UIView <WPStackPicViewDelegate>
{
    NSArray *_pics;
}

@property (nonatomic, strong) NSArray *pics;

@end

