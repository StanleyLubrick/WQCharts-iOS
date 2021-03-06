// https://github.com/CoderWQYao/WQCharts-iOS
//
// CoordinateChartVC.h
// WQCharts
//
// Created by WQ.Yao on 2020/01/02.
// Copyright (c) 2020年 WQ.Yao All rights reserved.
//

#import "BaseChartVC.h"

NS_ASSUME_NONNULL_BEGIN

@interface CoordinateChartVC : BaseChartVC<WQChartViewDrawDelegate>

- (void)layoutRectangleChartView;
- (UIEdgeInsets)chartViewPaddingForSelection:(NSInteger)selection;
- (void)updateChartExchangeXY;

@end

NS_ASSUME_NONNULL_END
