//
//  CSY_WeatherItemCell.h
//  YahooWeather
//
//  Created by Steve Smith on 7/20/12.
//  Copyright (c) 2012 Steve Smith. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSW_WeatherItem.h"

@interface CSW_WeatherItemCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *lblDate;
@property (weak, nonatomic) IBOutlet UILabel *lblText;
@property (weak, nonatomic) IBOutlet UILabel *lblLow;
@property (weak, nonatomic) IBOutlet UILabel *lblHigh;
@property (weak, nonatomic) IBOutlet UIImageView *imgIcon;

- (void) setWeatherItem:(CSW_WeatherItem *)weatherItem;

@end
