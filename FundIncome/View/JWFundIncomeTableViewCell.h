//
//  JWFundIncomeTableViewCell.h
//  FundIncome
//
//  Created by jianwei on 15/5/29.
//  Copyright (c) 2015年 Jianwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JWFundIncomeTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *fundNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *incomeLabel;
@property (weak, nonatomic) IBOutlet UIImageView *mood;

@end
