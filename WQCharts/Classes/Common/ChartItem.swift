// https://github.com/CoderWQYao/WQCharts-iOS
//
// ChartItem.swift
// WQCharts
//
// Created by WQ.Yao on 2020/01/02.
// Copyright (c) 2020年 WQ.Yao All rights reserved.
//

import UIKit

@objc(WQChartItem)
open class ChartItem: NSObject, Transformable {

    @objc open var tag: Any?
    
    open func nextTransform(_ progress: CGFloat) {
        
    }
    
    open func clearTransforms() {
       
    }
    
}
