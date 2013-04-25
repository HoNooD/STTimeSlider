//
//  STTimeSliderMoveView.h
//  STTimeSliderExample
//
//  Created by Sebastien Thiebaud on 4/19/13.
//  Copyright (c) 2013 Sebastien Thiebaud. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STTimeSlider;
@interface STTimeSliderMoveView : UIView

@property (nonatomic, assign) STTimeSlider *delegate;
@property (nonatomic, retain) UIBezierPath *movePath;

@property (nonatomic, assign) CGPoint startPoint;
@property (nonatomic, assign) CGPoint endPoint;

@end
